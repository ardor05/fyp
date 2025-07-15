#!/usr/bin/env python3
"""
ROS 2 node for sending a robot to different spots based on user input.
"""
 
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, PoseWithCovarianceStamped
from posestamped_msg_generator import PoseStampedGenerator


class GoalPublisher(Node):
    def __init__(self):
        super().__init__('goal_publisher')

        # Create publishers
        self.goal_publisher = self.create_publisher(PoseStamped, '/goal_pose/goal', 10)
        self.initial_pose_publisher = self.create_publisher(PoseWithCovarianceStamped, '/initialpose', 10)
        self.get_logger().info('Goal Publisher node has been initialized')

        # Initialize the PoseStamped message generator
        self.pose_generator = PoseStampedGenerator('pose_generator')

        # Set initial pose
        self.set_initial_pose()

        # Dictionary storing the x,y,z coordinates for each spot
        self.spots = {
            '1': {'x': -4.046032905578613, 'y': 16.33516502380371, 'z': -0.000400543212890625},
            '2': {'x': -3.9239397048950195, 'y': 13.726982116699219, 'z': 0.00481414794921875},
            '3': {'x': -3.9262256622314453, 'y': 11.507883071899414, 'z': 0.005130767822265625},
            '4': {'x': -3.764662742614746, 'y': 7.721917629241943, 'z': 0.004253387451171875},
            '5': {'x': -4.136211395263672, 'y': 5.730828285217285, 'z': 0.004039764404296875},
            '6': {'x': -4.08042049407959, 'y': 3.2772769927978516, 'z': 0.01003265380859375},
            '7': {'x': -4.090864181518555, 'y': -0.5796612501144409, 'z': 0.00598907470703125},
            '8': {'x': -4.116213798522949, 'y': -2.3338541984558105, 'z': 0.003215789794921875},
            '9': {'x': -4.100593566894531, 'y': -4.793334484100342, 'z': -0.002384185791015625},
            '10': {'x': -4.039589881896973, 'y': -8.381170272827148, 'z': -0.00640106201171875},
            '11': {'x': 2.093857765197754, 'y': -8.567377090454102, 'z': 0.0030517578125},
            '12': {'x': 2.1614017486572266, 'y': -5.11264181137085, 'z': 0.00331878662109375},
            '13': {'x': 2.15004825592041, 'y': -2.484497547149658, 'z': 0.006145477294921875},
            '14': {'x': 2.018505096435547, 'y': -0.3811842203140259, 'z': 0.016178131103515625},
            '15': {'x': 2.22818660736084, 'y': 2.903616428375244, 'z': 0.004047393798828125},
            '16': {'x': 2.242436408996582, 'y': 5.347524642944336, 'z': 0.0022430419921875},
            '17': {'x': 2.13265323638916, 'y': 7.779623508453369, 'z': 0.0034637451171875},
            '18': {'x': 2.2063913345336914, 'y': 11.19422435760498, 'z': 0.004009246826171875},
            '19': {'x': 2.289796829223633, 'y': 13.428343772888184, 'z': 0.0032196044921875},
            '20': {'x': 2.45113468170166, 'y': 16.284555435180664, 'z': 0.00406646728515625}
        }

    def set_initial_pose(self):
        """Set the initial pose of the robot."""
        initial_pose = PoseWithCovarianceStamped()
        initial_pose.header.frame_id = 'map'
        initial_pose.header.stamp = self.get_clock().now().to_msg()
        initial_pose.pose.pose.position.x = -4.311452865600586
        initial_pose.pose.pose.position.y = 19.90546417236328
        initial_pose.pose.pose.position.z = 0.007060050964355469
        initial_pose.pose.pose.orientation.w = 1.0  # Facing forward
        
        self.initial_pose_publisher.publish(initial_pose)
        self.get_logger().info('Initial pose set')

    def publish_goal(self, spot_number):
        """Publish goal pose for the selected spot."""
        spot = self.spots[spot_number]
        
        pose_msg = self.pose_generator.create_pose_stamped(
            x=spot['x'],
            y=spot['y'],
            z=spot['z'],
            qx=0.0,
            qy=0.0,
            qz=0.0,
            qw=1.0,
            frame_id='map'
        )
        
        self.goal_publisher.publish(pose_msg)
        self.get_logger().info(f'Goal pose published for spot {spot_number}')

    def run_interface(self):
        """Run the user interface for spot selection."""
        while True:
            print("\nAVAILABLE SPOTS:")
            for i in range(1, 21):
                print(f"Spot {i}", end='\t')
                if i % 5 == 0:
                    print()
            
            user_input = input('\nEnter spot number (1-20) or "q" to quit: ').strip()

            if user_input.lower() == 'q':
                break

            if user_input in self.spots:
                self.publish_goal(user_input)
            else:
                print("Invalid spot number! Please enter a number between 1 and 20.")


def main(args=None):
    rclpy.init(args=args)
    goal_publisher = GoalPublisher()

    try:
        goal_publisher.run_interface()
    except KeyboardInterrupt:
        print("\nShutting down...")
    finally:
        goal_publisher.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()