from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ros_basic_lessons',
            executable='pub_param',
            name='speaker',
            output = "screen",
            emulate_tty = True,
            parameters= [
                {"my_parameter":  10.0}
            ]
        ),
           Node(
            package='ros_basic_lessons',
            executable='sub_param',
            output = "screen",
            emulate_tty = False
        )
    ])