from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Запуск черепах
        Node(package='turtlesim', executable='turtlesim_node', name='turtle1'),
        Node(package='turtlesim', executable='turtlesim_node', name='turtle2'),
        Node(package='turtlesim', executable='turtlesim_node', name='turtle3'),

        # Узел mimic для того, чтобы turtle2 повторяла поведение turtle1
        Node(package='turtlesim', executable='mimic', name='mimic_turtle2',
             remappings=[
                 ("/input/pose", "/turtle1/pose"),
                 ("/output/cmd_vel", "/turtle2/cmd_vel")
             ]),

        # Узел mimic для того, чтобы turtle3 повторяла поведение turtle2
        Node(package='turtlesim', executable='mimic', name='mimic_turtle3',
             remappings=[
                 ("/input/pose", "/turtle2/pose"),
                 ("/output/cmd_vel", "/turtle3/cmd_vel")
             ]),
    ])

