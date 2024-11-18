import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Получаем путь к пакету 'need' и пути к файлам
    package_share_directory = get_package_share_directory('need')
    
    # Путь к файлу URDF
    urdf_file = os.path.join(package_share_directory, 'urdf', 'robot.urdf')

    # Чтение содержимого файла URDF
    with open(urdf_file, 'r') as infp:
        robot_desc = infp.read()

    # Путь к файлу конфигурации RViz
    rviz_config_file = os.path.join(package_share_directory, 'rviz', 'robot_config.rviz')

    return LaunchDescription([
        # Параметр для описания робота
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': robot_desc}]
        ),

        # GUI Joint State Publisher
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            name='joint_state_publisher_gui',
            output='screen'
        ),

        # RViz для визуализации
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', rviz_config_file]  # Указываем путь к файлу RViz
        )
    ])

