import math
from geometry_msgs.msg import Twist
import rclpy
from rclpy.node import Node
from tf2_ros import TransformException, Buffer, TransformListener
from rclpy.duration import Duration
from turtlesim.srv import Spawn

class FrameListener(Node):
    def __init__(self):
        super().__init__('turtle_tf2_frame_listener')

        self.target_frame = self.declare_parameter('target_frame', 'turtle1').get_parameter_value().string_value
        self.delay = self.declare_parameter('delay', 1).get_parameter_value().integer_value

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.spawner = self.create_client(Spawn, 'spawn')
        self.turtle_spawning_service_ready = False
        self.turtle_spawned = False

        self.publisher = self.create_publisher(Twist, 'turtle2/cmd_vel', 1)

        self.timer = self.create_timer(1.0, self.on_timer)
        self.start_time = self.get_clock().now()

    def normalize_angle(self, angle):
        return (angle + math.pi) % (2 * math.pi) - math.pi


    def on_timer(self):
        if (self.get_clock().now() - self.start_time) <= Duration(seconds=self.delay):
            return

        if self.turtle_spawning_service_ready:
            if self.turtle_spawned:
                try:
                    t = self.tf_buffer.lookup_transform(
                        'world',
                        'turtle1',
                        self.get_clock().now() - Duration(seconds=self.delay)
                    )
                except TransformException as ex:
                    self.get_logger().info(f'Could not transform: {ex}')
                    return

                msg = Twist()
                x_target = t.transform.translation.x
                y_target = t.transform.translation.y

                t_current = self.tf_buffer.lookup_transform(
                    'world',
                    'turtle2',
                    rclpy.time.Time()
                )

                x_current = t_current.transform.translation.x
                y_current = t_current.transform.translation.y
                distance = math.sqrt((x_target - x_current) ** 2 + (y_target - y_current) ** 2)

                angle_to_target = math.atan2(y_target - y_current, x_target - x_current)
                current_angle = 2 * math.atan2(t_current.transform.rotation.z, t_current.transform.rotation.w)

                # Calculate angular error and normalize it
                angular_error = self.normalize_angle(angle_to_target - current_angle)

                # Set rotation rate and linear speed
                scale_rotation_rate = 1.0
                scale_forward_speed = 0.5

                # If angular error is small, reduce angular velocity to avoid spinning in place
                if abs(angular_error) > 0.01:  # Set a small threshold to avoid unnecessary rotation
                    msg.angular.z = scale_rotation_rate * angular_error
                else:
                    msg.angular.z = 0.0  # Stop rotating if error is too small

                # Move forward if distance is significant
                if distance > 0.1:  # Set a threshold for linear movement
                    msg.linear.x = scale_forward_speed * distance
                else:
                    msg.linear.x = 0.0  # Stop moving if within the threshold distance

                self.publisher.publish(msg)
            else:
                if self.result.done():
                    self.get_logger().info(f'Successfully spawned {self.result.result().name}')
                    self.turtle_spawned = True
                else:
                    self.get_logger().info('Spawn is not finished')
        else:
            if self.spawner.service_is_ready():
                request = Spawn.Request()
                request.name = 'turtle2'
                request.x = 4.0
                request.y = 2.0
                request.theta = 0.0
                self.result = self.spawner.call_async(request)
                self.turtle_spawning_service_ready = True
            else:
                self.get_logger().info('Service is not ready')

def main():
    rclpy.init()
    node = FrameListener()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    rclpy.shutdown()
