from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
         Node(
            package='turtlesim',
            executable='turtlesim_node',
            output = "screen",
            emulate_tty = False
            
        ),
        Node(
            package='ros_basic_lessons',
            executable='turtle_sq_shape',
            output = "screen",
            emulate_tty = False
            
        )
          
    ])