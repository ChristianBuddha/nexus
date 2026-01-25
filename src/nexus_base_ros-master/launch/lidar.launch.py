from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument("channel_type", default_value="serial"),
        DeclareLaunchArgument("serial_port", default_value="/dev/ttyLIDAR"),
        DeclareLaunchArgument("serial_baudrate", default_value="256000"),
        DeclareLaunchArgument("frame_id", default_value="laser"),
        DeclareLaunchArgument("inverted", default_value="false"),
        DeclareLaunchArgument("angle_compensate", default_value="true"),
        DeclareLaunchArgument("scan_mode", default_value="Sensitivity"),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                PathJoinSubstitution([
                    FindPackageShare("sllidar_ros2"),
                    "launch",
                    "sllidar_a2m12_launch.py",
                ])
            ),
            launch_arguments={
                "channel_type": LaunchConfiguration("channel_type"),
                "serial_port": LaunchConfiguration("serial_port"),
                "serial_baudrate": LaunchConfiguration("serial_baudrate"),
                "frame_id": LaunchConfiguration("frame_id"),
                "inverted": LaunchConfiguration("inverted"),
                "angle_compensate": LaunchConfiguration("angle_compensate"),
                "scan_mode": LaunchConfiguration("scan_mode"),
            }.items(),
        ),
    ])
