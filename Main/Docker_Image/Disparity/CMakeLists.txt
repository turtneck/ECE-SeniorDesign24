cmake_minimum_required(VERSION 3.2)
project(disparity_retrieve)

find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(opencv-python REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(multisense_ros REQUIRED)

ament_target_dependencies(disparity_retrieve
cv_bridge
sensor_msgs
opencv-python
multisense_ros)


add_executable(disparity Camera_Ros.py)
target_link_libraries(disparity_retrieve disparity)
ament_target_dependencies(disparity rospy)

install(TARGETS disparity
        DESTINATION lib/disparity_retrieve)

ament_package()