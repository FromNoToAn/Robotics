#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from tf_transformations import quaternion_from_euler
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped
from math import sin, cos, atan2, pi, sqrt


class StarBot(Node):
    def __init__(self):
        super().__init__('star_bot')

        # Публикация в топик /cmd_vel
        self.cmd_pub = self.create_publisher(Twist, '/robot/cmd_vel', 10)

        # Инициализация TransformBroadcaster для публикации tf
        self.tf_broadcaster = TransformBroadcaster(self)

        # Таймер для периодической публикации (10 Гц)
        self.timer = self.create_timer(0.1, self.timer_callback)

        # Параметры звезды
        self.outer_radius = 3.0  # Внешний радиус звезды
        self.inner_radius = 0.5  # Внутренний радиус звезды
        self.num_points = 5  # Количество вершин у звезды
        self.interpolate_points = 50  # Точки между вершинами

        # Генерация пути
        self.path = self.generate_star_path()
        self.current_point_index = 0

        # Начальная позиция робота
        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0

def generate_star_path(self):
    """Генерация массива точек для звезды."""
    points = []
    angle_step = pi / self.num_points  # Угол между вершинами

    for i in range(2 * self.num_points):
        angle = i * angle_step
        radius = self.outer_radius if i % 2 == 0 else self.inner_radius
        x = radius * cos(angle)
        y = radius * sin(angle)
        points.append((x, y))

    # Добавление промежуточных точек
    interpolated_points = []
    for i in range(len(points)):
        x1, y1 = points[i]
        x2, y2 = points[(i + 1) % len(points)]  # Следующая точка
        for t in range(self.interpolate_points):
            fraction = t / self.interpolate_points
            x = x1 + fraction * (x2 - x1)
            y = y1 + fraction * (y2 - y1)
            interpolated_points.append((x, y))

    # Найти ближайшую точку к (0, 0)
    closest_point = min(interpolated_points, key=lambda p: sqrt(p[0]**2 + p[1]**2))

    # Переместить ближайшую точку в начало
    closest_index = interpolated_points.index(closest_point)
    interpolated_points = interpolated_points[closest_index:] + interpolated_points[:closest_index]

    return interpolated_points

    def timer_callback(self):
        """Основная логика движения."""
        if self.current_point_index >= len(self.path):
            # Завершение пути
            self.publish_cmd_vel(0.0, 0.0)
            return

        target_x, target_y = self.path[self.current_point_index]

        # Вычисление расстояния и угла к целевой точке
        dx = target_x - self.x
        dy = target_y - self.y
        distance = sqrt(dx**2 + dy**2)
        target_theta = atan2(dy, dx)

        # Управление скоростью
        linear_speed = min(0.2, distance)  # Максимальная скорость 0.2 м/с
        angular_speed = 2.0 * (target_theta - self.theta)  # Пропорциональное управление углом

        # Публикация команды скорости
        self.publish_cmd_vel(linear_speed, angular_speed)

        # Обновление текущей позиции (эмуляция движения)
        self.x += linear_speed * cos(self.theta) * 0.1
        self.y += linear_speed * sin(self.theta) * 0.1
        self.theta += angular_speed * 0.1

        # Проверка достижения точки
        if distance < 0.05:
            self.current_point_index += 1

        # Публикация TF
        self.publish_tf()

    def publish_cmd_vel(self, linear, angular):
        """Публикация команды скорости."""
        twist = Twist()
        twist.linear.x = linear
        twist.angular.z = angular
        self.cmd_pub.publish(twist)

    def publish_tf(self):
        """Публикация TF текущего положения."""
        quaternion = quaternion_from_euler(0, 0, self.theta)
        self.send_transform(self.x, self.y, 0, quaternion, "base_link", "world")

    def send_transform(self, x, y, z, quat, child_frame, parent_frame):
        """Отправка трансформации через TransformBroadcaster."""
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = parent_frame
        t.child_frame_id = child_frame
        t.transform.translation.x = float(x)
        t.transform.translation.y = float(y)
        t.transform.translation.z = float(z)
        t.transform.rotation.x = quat[0]
        t.transform.rotation.y = quat[1]
        t.transform.rotation.z = quat[2]
        t.transform.rotation.w = quat[3]
        self.tf_broadcaster.sendTransform(t)


def main(args=None):
    rclpy.init(args=args)
    bot = StarBot()
    rclpy.spin(bot)

    # Очистка ресурсов при завершении работы
    bot.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

