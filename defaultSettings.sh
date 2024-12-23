source /opt/ros/humble/setup.bash
source /opt/ros/humble/setup.sh
ros2 param set /multisense/camera auto_exposure_target_intensity 0.85
ros2 param set /multisense/camera auto_exposure_thresh 0.5
ros2 param set /multisense/camera gamma 2.2
ros2 param set /multisense/camera stereo_post_filtering 0.0
