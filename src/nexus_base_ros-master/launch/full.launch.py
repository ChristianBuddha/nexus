from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            "ekf_params_file",
            default_value=PathJoinSubstitution([
                FindPackageShare("nexus_base_ros"),
                "config",
                "ekf.yaml",
            ]),
        ),
        DeclareLaunchArgument("ekf_use_sim_time", default_value="false"),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                PathJoinSubstitution([
                    FindPackageShare("nexus_base_ros"),
                    "launch",
                    "nexus_bringup.launch.py",
                ])
            ),
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                PathJoinSubstitution([
                    FindPackageShare("nexus_base_ros"),
                    "launch",
                    "lidar.launch.py",
                ])
            ),
        ),

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
    ])
