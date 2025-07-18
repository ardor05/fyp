#!/bin/bash
# Single script to launch the Yahboom ROSMASTERX3 with Gazebo, Nav2 and ROS 2 Controllers
 
cleanup() {
    echo "Cleaning up..."
    sleep 5.0
    pkill -9 -f "ros2|gazebo|gz|nav2|amcl|bt_navigator|nav_to_pose|rviz2|assisted_teleop|cmd_vel_relay|robot_state_publisher|joint_state_publisher|move_to_free|mqtt|autodock|cliff_detection|moveit|move_group|basic_navigator"
}
 
# Set up cleanup trap
trap 'cleanup' SIGINT SIGTERM
 
# Check if SLAM argument is provided
if [ "$1" = "slam" ]; then
    SLAM_ARG="slam:=True"
else
    SLAM_ARG="slam:=False"
fi
 
# For cafe.world -> z:=0.20
# For house.world -> z:=0.05
# To change Gazebo camera pose: gz service -s /gui/move_to/pose --reqtype gz.msgs.GUICamera --reptype gz.msgs.Boolean --timeout 2000 --req "pose: {position: {x: 0.0, y: -2.0, z: 2.0} orientation: {x: -0.2706, y: 0.2706, z: 0.6533, w: 0.6533}}"
 
echo "Launching Gazebo simulation with Nav2..."
ros2 launch yahboom_rosmaster_bringup rosmaster_x3_navigation_launch.py \
   enable_odom_tf:=false \
   headless:=False \
   load_controllers:=true \
   world_file:=cafe.world \
   use_rviz:=true \
   use_robot_state_pub:=true \
   use_sim_time:=true \
   x:=0.0 \
   y:=0.0 \
   z:=0.20 \
   roll:=0.0 \
   pitch:=0.0 \
   yaw:=0.0 \
   "$SLAM_ARG" \
   map:=/home/ubuntu/ros2_ws/src/yahboom_rosmaster/yahboom_rosmaster_navigation/maps/cafe_world_map.yaml &
 
echo "Waiting 25 seconds for simulation to initialize..."
sleep 25
echo "Adjusting camera position..."
gz service -s /gui/move_to/pose --reqtype gz.msgs.GUICamera --reptype gz.msgs.Boolean --timeout 2000 --req "pose: {position: {x: 0.0, y: -2.0, z: 2.0} orientation: {x: -0.2706, y: 0.2706, z: 0.6533, w: 0.6533}}"
 
# Keep the script running until Ctrl+C
wait