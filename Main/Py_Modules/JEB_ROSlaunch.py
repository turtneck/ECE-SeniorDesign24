from launch import LaunchDescription
from launch_ros.actions import Node


packagename='your_package_name'
output='multisense_ros'

def generate_launch_description():
    return LaunchDescription([
        Node(
            package=packagename,
            executable='disparity_subscriber',
            name='disparity_subscriber',
            output=output,
            parameters=[{
                'qos_history': 'keep_last',
                'qos_depth': 10,
                'qos_reliability': 'reliable'
            }]
        ),
        Node(
            package=packagename,
            executable='colorimg_subscriber',
            name='colorimg_subscriber',
            output=output,
            parameters=[{
                'qos_history': 'keep_last',
                'qos_depth': 10,
                'qos_reliability': 'reliable'
            }]
        )
    ])

