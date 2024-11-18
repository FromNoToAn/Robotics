import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math

class TurtleFollower(Node):
    def __init__(self):
        super().__init__('turtle_follower')

        # Подписка на pose и публикация на cmd_vel
        self.pose_subscriber = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        self.velocity_publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        # Инициализация переменных
        self.current_pose = None
        self.t = 0.0  # Параметр времени для функции
        self.timer = self.create_timer(0.1, self.follow_trajectory)  # Таймер с интервалом 0.1 сек

    def pose_callback(self, msg):
        # Обновляем текущее положение черепахи
        self.current_pose = msg

    def trajectory_function(self, t):
        # Пример функции: спираль
        x = 2.0 * t * math.cos(2 * math.pi * t)
        y = 2.0 * t * math.sin(2 * math.pi * t)
        return [x, y]

    def follow_trajectory(self):
        if self.current_pose is None:
            return

        # Обновляем t с каждым вызовом таймера
        self.t += 0.01
        if self.t > 1.0:
            self.t = 0.0  # Сбрасываем для повторного движения по функции

        # Получаем целевые координаты по функции
        target_x, target_y = self.trajectory_function(self.t)

        # Вычисляем ошибки по положению
        error_x = target_x - self.current_pose.x
        error_y = target_y - self.current_pose.y
        distance_error = math.sqrt(error_x**2 + error_y**2)

        # Вычисляем целевой угол
        target_theta = math.atan2(error_y, error_x)
        angle_error = target_theta - self.current_pose.theta

        # Нормализуем угол ошибки (приводим угол к диапазону [-pi, pi])
        angle_error = math.atan2(math.sin(angle_error), math.cos(angle_error))

        # Пропорциональный контроллер для линейной и угловой скорости
        k_linear = 1
        k_angular = 6.0

        # Линейная скорость пропорциональна расстоянию до цели
        linear_speed = k_linear * distance_error

        # Ограничение скорости
        linear_speed = min(linear_speed, 2.0)

        # Угловая скорость пропорциональна угловой ошибке
        angular_speed = k_angular * angle_error

        # Ограничение угловой скорости
        angular_speed = max(min(angular_speed, 4.0), -4.0)

        # Публикуем команды скорости
        velocity_msg = Twist()
        velocity_msg.linear.x = linear_speed
        velocity_msg.angular.z = angular_speed
        self.velocity_publisher.publish(velocity_msg)

def main(args=None):
    rclpy.init(args=args)
    turtle_follower = TurtleFollower()
    rclpy.spin(turtle_follower)
    turtle_follower.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
