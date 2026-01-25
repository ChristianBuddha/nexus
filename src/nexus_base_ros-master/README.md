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
