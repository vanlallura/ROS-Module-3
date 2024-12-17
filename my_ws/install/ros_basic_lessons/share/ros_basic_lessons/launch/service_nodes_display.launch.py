from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ros_basic_lessons',
            executable='srv_node1',
            output = "screen",
            emulate_tty = False,
            arguments= ['10', '5']
        ),
           Node(
            package='ros_basic_lessons',
            executable='srv_node2',
            output = "screen",
            emulate_tty = False,
            arguments= []
        )
    ])