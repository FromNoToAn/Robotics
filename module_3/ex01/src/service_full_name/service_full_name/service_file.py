import rclpy

from rclpy.node import Node
from example_interfaces.srv import SummFullName


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(SummFullName, 'summ_full_name', self.sum_callback)

    def sum_callback(self, request, response):
        response.full_name = request.first_name + ' ' + request.name + ' ' +request.last_name
        self.get_logger().info(f'Incoming request from client: {response.full_name}')

        return response


def main():
    rclpy.init()
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()