import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jetson/Senior_Design_Project/camera_ros_node/install/sd_proj'
