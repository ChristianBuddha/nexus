#include <PinChangeInt.h>
#include <PinChangeIntConfig.h>
#include <EEPROM.h>
#include <PID_Beta6.h>
#include <MotorWheel.h>
#include <Omni4WD.h>
#include <math.h>

/* ===== Motors ===== */
irqISR(irq1,isr1);
MotorWheel wheel1(3,2,4,5,&irq1);       // FL
irqISR(irq2,isr2);
MotorWheel wheel2(11,12,14,15,&irq2);   // FR
irqISR(irq3,isr3);
MotorWheel wheel3(9,8,16,17,&irq3);     // RR
irqISR(irq4,isr4);
MotorWheel wheel4(10,7,18,19,&irq4);    // RL

Omni4WD Omni(&wheel1,&wheel2,&wheel3,&wheel4);

/* ===== Serial ===== */
#define BAUDRATE 115200
static char linebuf[80];
static uint8_t linelen = 0;

/* ===== TX rate ===== */
static unsigned long last_tx_ms = 0;
const unsigned long TX_DT_MS = 50;   // 20Hz

/* ===== cmd state (ROS 기준) =====
   vx: forward(mm/s), vy: left(mm/s), wz: yaw(mrad/s)
*/
static long vx_mmps = 0;
static long vy_mmps = 0;
static long wz_mradps = 0;

static unsigned long last_cmd_ms = 0;
const unsigned long CMD_TIMEOUT_MS = 250;

/* 제한 */
const int   MAX_SPEED_MMPS = 800;
const float MAX_OMEGA_RPS  = 4.0f;

static inline float clampf(float v, float lo, float hi) {
  if (v < lo) return lo;
  if (v > hi) return hi;
  return v;
}

/* ===== non-blocking line reader ===== */
static bool readLineNonBlocking(char* out, size_t out_sz) {
  while (Serial.available() > 0) {
    char c = (char)Serial.read();
    if (c == '\r') continue;

    if (c == '\n') {
      // line complete
      if (linelen >= out_sz) linelen = out_sz - 1;
      memcpy(out, linebuf, linelen);
      out[linelen] = '\0';
      linelen = 0;
      return true;
    }

    if (linelen < sizeof(linebuf) - 1) {
      linebuf[linelen++] = c;
    } else {
      // overflow -> drop line
      linelen = 0;
    }
  }
  return false;
}

static void apply_twist(long vx_fwd_mmps, long vy_left_mmps, long wz_mradps_in) {
  // Omni4WD 좌표계: x=RIGHT, y=FORWARD
  // ROS 좌표계: x=FORWARD, y=LEFT
  float x_right = (float)(-vy_left_mmps);
  float y_fwd   = (float)( vx_fwd_mmps);

  float speed = sqrtf(x_right*x_right + y_fwd*y_fwd); // mm/s
  float rad   = atan2f(y_fwd, x_right);               // rad
  float omega = ((float)wz_mradps_in) / 1000.0f;      // rad/s

  if (speed > MAX_SPEED_MMPS) {
    float s = (float)MAX_SPEED_MMPS / speed;
    speed *= s;
  }
  omega = clampf(omega, -MAX_OMEGA_RPS, MAX_OMEGA_RPS);

  Omni.setCarMove((int)speed, rad, omega);
}

static void hard_stop() {
  vx_mmps = vy_mmps = wz_mradps = 0;
  Omni.setCarMove(0, 0, 0);
}

static void publish_status() {
  unsigned long now = millis();
  if (now - last_tx_ms < TX_DT_MS) return;

  unsigned long dt_ms = (last_tx_ms == 0) ? TX_DT_MS : (now - last_tx_ms);
  last_tx_ms = now;

  // ISR에서 업데이트되는 값(펄스/속도) 읽을 때는 원자적으로
  int v1, v2, v3, v4;
  long p1, p2, p3, p4;

  noInterrupts();
  v1 = wheel1.getSpeedMMPS();
  v2 = wheel2.getSpeedMMPS();
  v3 = wheel3.getSpeedMMPS();
  v4 = wheel4.getSpeedMMPS();

  p1 = wheel1.getCurrPulse();
  p2 = wheel2.getCurrPulse();
  p3 = wheel3.getCurrPulse();
  p4 = wheel4.getCurrPulse();
  interrupts();

  // 속도(정수) 송신: 파싱 쉬움 + 대역폭 안정
  Serial.print("WHEEL ");
  Serial.print(dt_ms); Serial.print(" ");
  Serial.print(v1); Serial.print(" ");
  Serial.print(v2); Serial.print(" ");
  Serial.print(v3); Serial.print(" ");
  Serial.println(v4);

  // 엔코더(누적 펄스)도 같이 송신(원하면 주석처리)
  Serial.print("ENC ");
  Serial.print(dt_ms); Serial.print(" ");
  Serial.print(p1); Serial.print(" ");
  Serial.print(p2); Serial.print(" ");
  Serial.print(p3); Serial.print(" ");
  Serial.println(p4);
}

void setup() {
  // PWM 31.25kHz
  TCCR1B = (TCCR1B & 0xf8) | 0x01; // Pin9, Pin10
  TCCR2B = (TCCR2B & 0xf8) | 0x01; // Pin3, Pin11

  Serial.begin(BAUDRATE);
  delay(100);

  // PIDEnable 내부에서 setupInterrupt() 호출됨 (Motor.cpp에서 확인됨)
  Omni.PIDEnable(0.31, 0.01, 0.1, 10);

  last_cmd_ms = millis();
  last_tx_ms = 0;

  Serial.println("OMNI_READY_PC_MODE");
}

void loop() {
  // 1) RX: 한 줄만 처리 (PID 주기 안 깨지게)
  char rx[80];
  if (readLineNonBlocking(rx, sizeof(rx))) {
    if (!strncmp(rx, "TWIST", 5)) {
      long a, b, c;
      if (sscanf(rx + 5, "%ld %ld %ld", &a, &b, &c) == 3) {
        vx_mmps = a;
        vy_mmps = b;
        wz_mradps = c;
        last_cmd_ms = millis();
        apply_twist(vx_mmps, vy_mmps, wz_mradps);
      }
    } else if (!strncmp(rx, "STOP", 4)) {
      hard_stop();
      last_cmd_ms = millis();
    }
  }

  // 2) deadman timeout
  if (millis() - last_cmd_ms > CMD_TIMEOUT_MS) {
    hard_stop();
  }

  // 3) low-level control loop
  Omni.PIDRegulate();

  // 4) status TX to PC
  publish_status();
}
