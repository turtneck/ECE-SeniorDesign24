# Install script for directory: /home/jetson/Senior_Design_Project/camera_ros_node/src/multisense_ros2/multisense_lib/LibMultiSense/source/Utilities

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jetson/Senior_Design_Project/camera_ros_node/install/multisense_lib")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/AprilTagTestUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/ChangeFps/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/ChangeIpUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/ChangeResolution/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/ChangeTransmitDelay/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/ColorImageUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/DeviceInfoUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/DepthImageUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/ExternalCalUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/FeatureDetectorUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/FlashUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/ImageCalUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/ImuConfigUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/ImuTestUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/LidarCalUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/PointCloudUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/RectifiedFocalLengthUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/SaveImageUtility/cmake_install.cmake")
  include("/home/jetson/Senior_Design_Project/camera_ros_node/build/multisense_lib/LibMultiSense/source/Utilities/VersionInfoUtility/cmake_install.cmake")

endif()

