#!/usr/bin/env python3

# import rclpy
# from rclpy.node import Node
# from geometry_msgs.msg import Twist
# from tf_transformations import quaternion_from_euler
# from tf2_ros import TransformBroadcaster
# from geometry_msgs.msg import TransformStamped
# from math import sin, cos, atan2, sqrt, pi
# import argparse

# def normalize_angle(angle):
#     """Нормализация угла в диапазон [-pi, pi]."""
#     while angle > pi:
#         angle -= 2 * pi
#     while angle < -pi:
#         angle += 2 * pi
#     return angle

# class EllipseBot(Node):
#     def __init__(self, major, minor, points):
#         super().__init__('ellipse_bot')

#         # Параметры эллипса
#         self.major = major
#         self.minor = minor
#         self.points = points

#         # Генерация точек эллипса с учётом смещения
#         self.ellipse_points = self.calculate_ellipse_points()

#         # Параметры текущего движения
#         self.current_point_idx = 0
#         self.current_position = [0.0, 0.0]  # x, y
#         self.linear_speed = 0.2  # м/с
#         self.angular_speed = 0.2  # рад/с

#         # Публикация в топик /cmd_vel
#         self.cmd_pub = self.create_publisher(Twist, '/robot/cmd_vel', 10)

#         # Инициализация TransformBroadcaster для публикации tf
#         self.tf_broadcaster = TransformBroadcaster(self)

#         # Таймер для периодической публикации (10 Гц)
#         self.timer = self.create_timer(0.1, self.timer_callback)

#     def calculate_ellipse_points(self):
#         """Генерация точек эллипса с учётом смещения, чтобы пройти через (0, 0)."""
#         points = []
#         for i in range(self.points):
#             angle = 2 * pi * i / self.points
#             x = self.major * cos(angle)
#             y = self.minor * sin(angle)
#             points.append((x, y))
#         return points

#     def timer_callback(self):
#         """Функция, вызываемая таймером."""
#         if self.current_point_idx >= len(self.ellipse_points):
#             self.current_point_idx = 0  # Начать заново

#         # Текущая и целевая точки
#         current_point = self.current_position
#         target_point = self.ellipse_points[self.current_point_idx]

#         # Вычисление расстояния и угла
#         distance = sqrt((target_point[0] - current_point[0])**2 + (target_point[1] - current_point[1])**2)
#         angle_to_target = atan2(target_point[1] - current_point[1], target_point[0] - current_point[0])

#         if distance > 0.05:  # Уменьшено для более точного движения
#             self.publish_cmd_vel(distance, angle_to_target)
#         else:  # Перейти к следующей точке
#             self.current_point_idx += 1

#         # Публикация текущей трансформации
#         self.publish_tf()

#     def publish_cmd_vel(self, distance, target_angle):
#         """Публикация команды скорости для движения."""
#         twist = Twist()

#         # Нормализация угла
#         current_angle = atan2(self.current_position[1], self.current_position[0])
#         angle_diff = normalize_angle(target_angle - current_angle)

#         # Пропорциональное управление
#         twist.linear.x = min(self.linear_speed, distance)
#         twist.angular.z = self.angular_speed * angle_diff

#         # Ограничение угловой скорости
#         twist.angular.z = max(-self.angular_speed, min(self.angular_speed, twist.angular.z))

#         self.cmd_pub.publish(twist)

#         # Обновление текущей позиции
#         self.current_position[0] += twist.linear.x * cos(current_angle) * 0.1
#         self.current_position[1] += twist.linear.x * sin(current_angle) * 0.1

#     def publish_tf(self):
#         """Публикация TF для робота."""
#         x, y = self.current_position
#         quaternion = quaternion_from_euler(0, 0, atan2(y, x))

#         # Публикация TF для базы робота
#         self.send_transform(x, y, 0, quaternion, "base_link", "world")

#     def send_transform(self, x, y, z, quat, child_frame, parent_frame):
#         """Отправка трансформации через TransformBroadcaster."""
#         t = TransformStamped()
#         t.header.stamp = self.get_clock().now().to_msg()
#         t.header.frame_id = parent_frame
#         t.child_frame_id = child_frame
#         t.transform.translation.x = float(x)
#         t.transform.translation.y = float(y)
#         t.transform.translation.z = float(z)
#         t.transform.rotation.x = quat[0]
#         t.transform.rotation.y = quat[1]
#         t.transform.rotation.z = quat[2]
#         t.transform.rotation.w = quat[3]
#         self.tf_broadcaster.sendTransform(t)

# def main(args=None):
#     # Парсинг аргументов
#     parser = argparse.ArgumentParser(description='Ellipse movement for robot')
#     parser.add_argument('--major', type=float, default=100.0, help='Major axis of the ellipse')
#     parser.add_argument('--minor', type=float, default=5.0, help='Minor axis of the ellipse')
#     parser.add_argument('--points', type=int, default=100, help='Number of points to approximate the ellipse')
#     parsed_args, unknown = parser.parse_known_args()  # Парсим известные аргументы

#     rclpy.init(args=unknown)  # Передаем неизвестные ROS2 аргументы

#     bot = EllipseBot(parsed_args.major, parsed_args.minor, parsed_args.points)
#     rclpy.spin(bot)

#     # Очистка ресурсов при завершении работы
#     bot.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()


#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math


class SineWaveNode(Node):
    def __init__(self):
        super().__init__('sine_wave_node')
        self.publisher_ = self.create_publisher(Twist, '/robot/cmd_vel', 10)
        self.timer_period = 0.1  # период таймера в секундах
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        self.time_elapsed = 0.0
        self.amplitude1 = 1.0  # Амплитуда для первой синусоиды
        self.amplitude2 = 2.0  # Амплитуда для второй синусоиды
        self.frequency1 = 0.2  # Частота для первой синусоиды
        self.frequency2 = 0.4  # Частота для второй синусоиды
        self.linear_speed = 1.0  # Линейная скорость по оси X

    def timer_callback(self):
        twist_msg = Twist()

        # Генерация траектории по оси Y, с двумя синусоидальными функциями
        x_position = self.time_elapsed * self.linear_speed
        y_position = (self.amplitude1 * math.sin(self.frequency1 * x_position) +
                      self.amplitude2 * math.sin(self.frequency2 * x_position))

        # Для движения по синусоиде, мы рассчитываем угловую скорость на основе изменения y
        # Если y_position изменяется, то робот должен поворачиваться.
        angular_velocity = 2.0 * y_position  # Это коэффициент, который влияет на скорость поворота робота

        # Выставляем линейную скорость по X и угловую скорость по Z (для поворотов)
        twist_msg.linear.x = self.linear_speed
        twist_msg.angular.z = angular_velocity  # Робот поворачивает в зависимости от y_position

        # Публикация команды
        self.publisher_.publish(twist_msg)

        # Увеличиваем время для отслеживания движения
        self.time_elapsed += self.timer_period


def main(args=None):
    rclpy.init(args=args)
    node = SineWaveNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
