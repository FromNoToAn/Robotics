import rclpy

from rclpy.action import ActionClient
from rclpy.node import Node
from example_interfaces.action import MessageTurtleCommands
    

class TurtleActionClient(Node):

    def __init__(self, commands):
        super().__init__('turtle_action_client')
        self._action_client = ActionClient(self, MessageTurtleCommands, 'turtle_act')
        self.commands = commands
        self.current_command_index = 0

        self.get_logger().info('Waiting for action server...')
        self._action_client.wait_for_server()
        self.get_logger().info('Action server available.')

        self.send_next_goal()
        
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f"Feedback: {feedback.odom:.2f}")
        
    def get_result_callback(self, future):
        result = future.result().result
        status = future.result().status

        if status == 4:  # Goal SUCCEEDED
            self.get_logger().info(f"Goal {self.current_command_index + 1} succeeded.")
        else:
            self.get_logger().warning(f"Goal {self.current_command_index + 1} failed with status: {status}")

        self.get_logger().info(f"Result: {result.result}")
        
        self.current_command_index += 1 # Move to the next command
        self.send_next_goal()
        
    def goal_response_callback(self, future):
        goal_handle = future.result()
        
        if not goal_handle.accepted:
            self.get_logger().warning(f"Goal {self.current_command_index + 1} rejected.")
            self.current_command_index += 1
            self.send_next_goal()
            return

        self.get_logger().info(f"Goal {self.current_command_index + 1} accepted.")
        
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def send_next_goal(self):
        if self.current_command_index < len(self.commands):
            command = self.commands[self.current_command_index]
            self.send_goal(command)
        else:
            self.get_logger().info('All commands have been executed.')
            self.destroy_node()
            rclpy.shutdown()

    def send_goal(self, command):
        goal_msg = MessageTurtleCommands.Goal()
        
        goal_msg.command = command['command']
        goal_msg.s = command['s']
        goal_msg.angle = command['angle']
        self.get_logger().info(f"Sending goal {self.current_command_index + 1}/{len(self.commands)}: {goal_msg.command}")
        
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        
        self._send_goal_future.add_done_callback(self.goal_response_callback)


def main(args=None):
    rclpy.init(args=args)

    commands = [
        {'command': 'forward', 's': 2.0, 'angle': 0.0},
        {'command': 'turn_right', 's': 0.0, 'angle': 90.0},
        {'command': 'forward', 's': 1.0, 'angle': 0.0},
    ]

    action_client = TurtleActionClient(commands)

    try:
        rclpy.spin(action_client)
    except KeyboardInterrupt:
        action_client.get_logger().info('Action client interrupted by user.')
    finally:
        if rclpy.ok():
            action_client.destroy_node()
            rclpy.shutdown()


if __name__ == '__main__':
    main()
