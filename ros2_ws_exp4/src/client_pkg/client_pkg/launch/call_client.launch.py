from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='client_pkg',  # Ensure package name matches
            executable='service_client',
            output='screen'
        )
    ])
