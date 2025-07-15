from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        # Your navigation node
        Node(
            package='mec_mobile_navigation',
            executable='test_nav_to_pose.py',
            name='navigation_spot',
            output='screen',
            parameters=[{'use_sim_time': True}]
        ),
        
        # Navigation stack
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                get_package_share_directory('nav2_bringup'),
                '/launch/navigation_launch.py'
            ]),
            launch_arguments={
                'use_sim_time': 'true',
                'params_file': get_package_share_directory('mec_mobile_navigation') + '/params/nav2_params.yaml'
            }.items()
        ),
        
        # RViz
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', get_package_share_directory('mec_mobile_navigation') + '/rviz/navigation.rviz'],
            output='screen'
        )
    ])