from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution


def generate_launch_description():
    return LaunchDescription([

        # =========================
        # EKF
        # =========================
        DeclareLaunchArgument(
            "ekf_params_file",
            default_value=PathJoinSubstitution([
                FindPackageShare("nexus_base_ros"),
                "config",
                "ekf.yaml",
            ]),
        ),
        DeclareLaunchArgument("ekf_use_sim_time", default_value="false"),

        # =========================
        # Base bringup (모터, IMU, TF 등)
        # =========================
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                PathJoinSubstitution([
                    FindPackageShare("nexus_base_ros"),
                    "launch",
                    "nexus_bringup.launch.py",
                ])
            ),
        ),

        # =========================
        # EKF node
        # =========================
        Node(
            package="robot_localization",
            executable="ekf_node",
            name="ekf_filter_node",
            output="screen",
            parameters=[
                LaunchConfiguration("ekf_params_file"),
                {"use_sim_time": LaunchConfiguration("ekf_use_sim_time")},
            ],
        ),

        # =========================
        # LiDAR (1.5초 지연 실행)
        # =========================
        TimerAction(
            period=1.5,
            actions=[
                IncludeLaunchDescription(
                    PythonLaunchDescriptionSource(
                        PathJoinSubstitution([
                            FindPackageShare("sllidar_ros2"),
                            "launch",
                            "sllidar_a2m12_launch.py",
                        ])
                    ),
                    launch_arguments={
                        "channel_type": "serial",
                        "serial_port": "/dev/ttyLIDAR",
                        "serial_baudrate": "256000",
                        "frame_id": "laser",
                        "inverted": "false",
                        "angle_compensate": "true",
                        "scan_mode": "Sensitivity",
                    }.items(),
                )
            ],
        ),
    ])

