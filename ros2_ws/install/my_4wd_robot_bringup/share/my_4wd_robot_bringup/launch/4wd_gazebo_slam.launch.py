from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess


def generate_launch_description():
    return LaunchDescription([
        # Start Gazebo with parking.world
        ExecuteProcess(
            cmd=['gazebo', '--verbose', '/home/amr01/fyp/ros2_ws/src/yahboom_rosmaster/yahboom_rosmaster_gazebo/worlds/parking.world', '-s', 'libgazebo_ros_factory.so'],
            output='screen'
        ),
        # Spawn robot in Gazebo
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=['-entity', '4wd_robot', '-file', '/home/amr01/fyp/ros2_ws/src/my_4wd_robot_description/urdf/4wd_robot.urdf.xacro', '-x', '0', '-y', '0', '-z', '0.1'],
            output='screen'
        ),
        # Start SLAM Toolbox
        Node(
            package='slam_toolbox',
            executable='sync_slam_toolbox_node',
            name='slam_toolbox',
            output='screen',
            parameters=[{'use_sim_time': True}]
        ),
        # Start RViz
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
        ),
    ]) 