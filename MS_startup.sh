cd ~/Senior_Design_Project/camera_ros_node
source /opt/ros/humble/setup.bash
source /opt/ros/humble/setup.sh
source install/setup.bash
ros2 launch multisense_ros multisense_launch.py sensor:=KS21
