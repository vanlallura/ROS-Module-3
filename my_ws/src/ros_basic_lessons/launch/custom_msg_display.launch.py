from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ros_basic_lessons',
            executable='pub_custom',
            output = "screen",
            emulate_tty = True,
            
        ),
           Node(
            package='ros_basic_lessons',
            executable='sub_custom',
            output = "screen",
            emulate_tty = False
        )
    ])