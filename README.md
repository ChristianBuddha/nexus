# odom_revise_cap
capstonc_c-'s upgrade
**설명**
- 이 노드는 휠 인코더(`nexus_base_ros::msg::Encoders`)를 받아 휠 스탬프(`header.stamp`)를 기준으로 odometry를 계산해 `/sensor_odom`으로 퍼블리시하고 TF(`odom -> base_link`)를 브로드캐스트합니다.

**변경 요약**
- 기존에는 노드 내부에서 `now()`를 사용해 odometry 타임스탬프와 dt를 계산했습니다.
- 변경 후: 수신되는 휠 메시지의 `header.stamp`를 `rclcpp::Time`으로 사용하여 dt를 계산하고 odom/TF의 타임스탬프에 해당 값을 적용합니다.
- 빌드 중 ROS2 API 차이로 `to_msg()`를 사용하지 않고 `nanoseconds()`를 이용해 `sec`/`nanosec`을 직접 채워줍니다.

**왜 이렇게 했나**
- 센서(또는 시리얼 인터페이스)에서 제공하는 타임스탬프를 사용하면 센서 데이터와 odometry의 시간이 일치하여 데이터 동기화가 더 정확해집니다.
- 특히 bag replay(`--clock`)나 시뮬레이션 환경에서 센서 타임스탬프를 사용하면 재현성이 좋아집니다.

**빌드**
- 워크스페이스 루트에서:

```bash
colcon build --packages-select nexus_base_ros
source install/setup.bash
```

**실행 예시**
- 실제 노드 실행 (실시간 클럭 사용):

```bash
ros2 run nexus_base_ros nexus_odometry --ros-args -p use_sim_time:=false
```

- bag 재생으로 테스트할 때(가장 일반적):

```bash
ros2 bag play <your_bag> --clock -r 1.0 --topics /wheel_vel /tf_static /cmd_vel
ros2 run nexus_base_ros nexus_odometry --ros-args -p use_sim_time:=true
```

(스크린샷에서 사용한 예: `ros2 run nexus_base_ros nexus_odometry --ros-args -p use_sim_time:=true`)

**토픽 / 메시지**
- 구독:
  - `wheel_vel` : `nexus_base_ros::msg::Encoders` (노드가 `msg.header.stamp`를 사용함)
- 발행:
  - `sensor_odom` : `nav_msgs::msg::Odometry` (header.stamp = wheel header.stamp)
- TF:
  - `odom` -> `base_link` (동일한 스탬프 사용)

**테스트 체크리스트**
- `wheel_vel` 메시지의 `header.stamp`가 0이 아닌지 확인하세요. (초기화 루틴에서는 `last_time_`이 0이면 첫 샘플에서 시간만 설정하고 dt는 계산하지 않습니다.)
- bag 재생 시 `--clock` 옵션을 사용하고 노드에 `use_sim_time:=true`를 설정하세요.
- `ros2 topic echo /wheel_vel`로 메시지와 헤더 스탬프 확인.
- `ros2 topic echo /sensor_odom`으로 발행되는 odom의 헤더 스탬프와 pose가 예상대로 업데이트되는지 확인.

**문제 해결**
- odom이 전혀 업데이트되지 않음:
  - `wheel_vel`이 전송되지 않거나 `sample.valid`가 설정되지 않았을 수 있습니다. 시리얼 브리지 또는 bag 재생을 확인하세요.
  - `wheel_vel.header.stamp`가 0이면 `last_time_`이 초기화되어 dt가 계산되지 않습니다.
- 타임스탬프 불일치:
  - 시스템 시간과 bag(또는 시뮬레이션) 시간 차이로 인해 timestamp가 이상하면 `--clock`/`use_sim_time` 설정을 점검하세요.

**주의/제약**
- `nexus_odometry`는 `wheel_vel` 메시지의 `header.stamp`를 신뢰합니다. 만약 `nexus_serial_bridge`처럼 스탬프를 `now()`로 채우는 구현을 사용 중이라면, 그 시점의 노드 로컬 클럭에 기반한 타임스탬프가 됩니다(이는 실시간 환경에서는 적절하지만, bag replay/시뮬레이션에서는 `--clock`와 `use_sim_time` 설정이 필요합니다).
- ROS2 버전에 따라 `rclcpp::Time` API가 달라 `to_msg()`가 없을 수 있으므로 코드에서 `nanoseconds()`로 직접 변환하도록 구현했습니다.

**향후 개선사항**
- `wheel_vel`을 생성하는 노드(예: `nexus_serial_bridge`)가 가능한 경우 센서 혹은 펌웨어에서 직접 타임스탬프를 제공하도록 수정하면 이상적입니다.
- 타임스탬프가 불안정한 경우 보정(예: smoothing, max dt 제한 등)을 추가할 수 있습니다.

참고: 구현 파일: [src/nexus_base_ros-master/src/nexus_odometry.cpp](src/nexus_base_ros-master/src/nexus_odometry.cpp)
# ROS 2 wheelbase controller for the NEXUS Omni 4-Wheeled Mecanum Robot

## ROS 2 Humble (this repo)
This package is refactored for ROS 2 Humble with a **custom serial protocol** firmware
(no rosserial). The ROS 2 side provides:

- `nexus_serial_bridge`: serial RX/TX node
- `nexus_odometry`: odom integration (frame: `odom` -> `base_link`)
- `nexus_teleop_joy`: joystick to `/cmd_vel`

### Firmware protocol (required)
The firmware should accept:
- `TWIST <vx_mmps> <vy_mmps> <wz_mradps>`
- `STOP`

And publish (20Hz):
- `WHEEL <dt_ms> <v1> <v2> <v3> <v4>`
- `ENC <dt_ms> <p1> <p2> <p3> <p4>`

### Topics
- `/cmd_vel` (geometry_msgs/Twist) -> serial `TWIST`
- `/wheel_vel` (nexus_base_ros/Encoders) from `WHEEL` (units: mm/s)
- `/wheel_enc` (std_msgs/Int32MultiArray) from `ENC` (cumulative pulses)
- `/sensor_odom` (nav_msgs/Odometry)

### Frames
- `base_link` is the robot base frame (child of `odom`)
- `imu_link` and `laser` are published via static TF

### Build (ROS 2)
```
colcon build --packages-select nexus_base_ros
source install/setup.bash
```

### Launch
```
ros2 launch nexus_base_ros nexus_bringup.launch.py
```

### Sensors
This repo does **not** vendor external drivers. Start these separately:
- IMU (BNO055 I2C): https://github.com/flynneva/bno055
- LiDAR (A2M12): https://github.com/Slamtec/sllidar_ros2 (use `view_sllidar_a2m12_launch.py`)

## Required hardware
This controller targets the NEXUS 4WD Mecanum Wheel Mobile Arduino Robotics Car 10011.
