# slam_nav2_setup.launch.py   (place in robotnik_gazebo_ignition/launch)

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node

def generate_launch_description():
    # ── Launch arguments ────────────────────────────────────────────────────────
    robot              = LaunchConfiguration('robot',      default='rbsummit')
    world              = LaunchConfiguration('world',      default='empty')
    use_sim_time       = LaunchConfiguration('use_sim_time', default='true')
    slam               = LaunchConfiguration('slam',       default='true')   # true → run SLAM-Toolbox
    map_yaml           = LaunchConfiguration('map',        default='')
    autostart          = LaunchConfiguration('autostart',  default='true')

    params_file        = LaunchConfiguration(
        'params_file',
        default=PathJoinSubstitution([
            FindPackageShare('robotnik_gazebo_ignition'), 'config', 'nav2_params.yaml'
        ])
    )

    slam_params_file   = LaunchConfiguration(
        'slam_params_file',
        default=PathJoinSubstitution([
            FindPackageShare('robotnik_gazebo_ignition'), 'config', 'slam_toolbox_params_online_async.yaml'
        ])
    )

    # ── Include existing launch files ──────────────────────────────────────────
    spawn_world = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([FindPackageShare('robotnik_gazebo_ignition'),
                                   'launch', 'spawn_world.launch.py'])
        ),
        launch_arguments={'world': world}.items()
    )

    spawn_robot = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([FindPackageShare('robotnik_gazebo_ignition'),
                                   'launch', 'spawn_robot.launch.py'])
        ),
        launch_arguments={'robot': robot}.items()
    )

    # ── SLAM Toolbox (only if slam == true) ────────────────────────────────────
    slam_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([FindPackageShare('slam_toolbox'),
                                   'launch', 'online_async_launch.py'])
        ),
        condition=IfCondition(slam),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'slam_params_file': slam_params_file
        }.items()
    )

    # ── Nav2 bring-up (planner, controller, BT navigator, …) ───────────────────
    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([FindPackageShare('nav2_bringup'),
                                   'launch', 'bringup_launch.py'])
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'autostart': autostart,
            'params_file': params_file,
            # nav2_bringup uses these to decide between SLAM or localization
            'slam': slam,
            'map': map_yaml
        }.items()
    )

    # ── RViz (Nav2 default view) ──────────────────────────────────────────────
    rviz_cfg = PathJoinSubstitution(
        [FindPackageShare('nav2_bringup'), 'rviz', 'nav2_default_view.rviz']
    )
    rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_cfg],
        parameters=[{'use_sim_time': use_sim_time}]
    )

    # ── Assemble description ──────────────────────────────────────────────────
    return LaunchDescription([
        spawn_world,
        spawn_robot,
        slam_launch,
        nav2_launch,
        rviz
    ])