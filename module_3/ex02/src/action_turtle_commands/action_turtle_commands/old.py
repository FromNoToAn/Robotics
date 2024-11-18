# import rclpy
# import numpy as np
# from rclpy.action import ActionServer
# from rclpy.node import Node
# from std_msgs.msg import String
# from geometry_msgs.msg import Twist
# from example_interfaces.action import MessageTurtleCommands
# import time


# class TurtleActionServer(Node):

#     def __init__(self):
#         super().__init__('turtle_action_server')
#         self._action_server = ActionServer(
#             self,
#             MessageTurtleCommands,
#             'turtle_act',
#             self.execute_callback)
#         self.cmd_vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
#         self.subscription = self.create_subscription(
#             Twist,
#             '/turtle1/cmd_vel',
#             self.cmd_vel_callback,
#             10
#         )
#         self.dist = 0.0

#     def cmd_vel_callback(self, msg):
#         self.dist = msg.linear.x
    
#     def execute_callback(self, goal_handle):
#         self.get_logger().info('Executing goal...')
#         print(goal_handle.request.s)
#         twist = Twist()
#         if goal_handle.request.command == 'turn_left':
#             twist.angular.z = np.deg2rad(float(goal_handle.request.angle))
#         elif goal_handle.request.command == 'turn_right':
#             twist.angular.z = np.deg2rad(float(-goal_handle.request.angle))
#         else:
#             twist.linear.x = float(goal_handle.request.s)

#         self.cmd_vel_pub.publish(twist)
        
#         feedback_msg = MessageTurtleCommands.Feedback()
#         for i in range(5):
#             time.sleep(0.5)
            
#             # Обновляем обратную связь
#             feedback_msg.odom = int(self.dist)
#             goal_handle.publish_feedback(feedback_msg)
#         print("Command executed...")
#         goal_handle.succeed()
#         result = MessageTurtleCommands.Result()
#         result.result = feedback_msg.odom == goal_handle.request.s or goal_handle.request.s == 0
#         print("Fully completed: ", result.result)
#         return result


# def main(args=None):
#     rclpy.init(args=args)

#     fibonacci_action_server = TurtleActionServer()

#     rclpy.spin(fibonacci_action_server)


# if __name__ == '__main__':
#     main()
