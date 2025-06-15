#!/usr/bin/env python3
"""Launch teleop_twist_keyboard for a namespaced robot.

Usage:
  ros2 launch robotnik_gazebo_ignition teleop_keyboard.launch.py namespace:=robot

It will publish geometry_msgs/Twist on /<namespace>/cmd_vel so it can be consumed
by your robotnik_base_controller.
"""
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, TextSubstitution
from launch_ros.actions import Node


def generate_launch_description():
    # Allow overriding the robot namespace (defaults to "robot").
    namespace_arg = DeclareLaunchArgument(
        "namespace",
        default_value=TextSubstitution(text="robot"),
        description="Namespace where the robot controllers live (same used when spawning).",
    )

    namespace = LaunchConfiguration("namespace")

    # teleop_twist_keyboard publishes on /cmd_vel by default. We remap it to
    # /<namespace>/cmd_vel so it reaches the namespaced controllers.
    teleop_node = Node(
        package="teleop_twist_keyboard",
        executable="teleop_twist_keyboard",
        name="teleop_twist_keyboard",
        output="screen",
        remappings=[
            ("/cmd_vel", [namespace, "/cmd_vel"]),
        ],
        prefix="xterm -e",  # opens inside a terminal so key capture works
        parameters=[{"use_sim_time": True}],
    )

    ld = LaunchDescription([
        namespace_arg,
        teleop_node,
    ])
    return ld
