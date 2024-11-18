import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math
import argparse


flag_1 = flag_2 = True

class MoveToGoal(Node):
    def __init__(self, target_x, target_y, target_theta):
        super().__init__('move_to_goal')
        self.target_x = target_x
        self.target_y = target_y
        self.target_theta = (target_theta + math.pi) % (2 * math.pi) - math.pi
        
        self.pose_sub = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        self.vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        self.timer = self.create_timer(0.01, self.go_to_goal)
        self.pose = Pose()

    def pose_callback(self, data):
        self.pose = data

    def go_to_goal(self):
        global flag_1
        global flag_2
        
        coeff_speed_vel = 1.5
        
        new_vel = Twist()
        
        distance_to_goal = math.sqrt((self.target_x - self.pose.x)**2 + (self.target_y - self.pose.y)**2)
        angle_to_goal = math.atan2(self.target_y - self.pose.y, self.target_x - self.pose.x + 1e-13)
        
        distance_tolerance = 0.01
        angle_tolerance = 0.01
        
        move_angle_error = angle_to_goal - self.pose.theta
        stop_angle_error = self.target_theta - self.pose.theta
        
        if (distance_to_goal <= distance_tolerance) and flag_1:
            flag_1 = False
            flag_2 = True
            
        
        if (abs(move_angle_error) > angle_tolerance) and flag_1:
            flag_2 = False
            new_vel.angular.z = coeff_speed_vel * move_angle_error
        elif flag_1:
            if (distance_to_goal > distance_tolerance):
                # new_vel.linear.z = 0.0
                new_vel.linear.x = coeff_speed_vel * distance_to_goal
            else:
                new_vel.linear.x = 0.0
                flag_1 = False
                flag_2 = True
                
        if flag_2:
            if (abs(stop_angle_error) > angle_tolerance):
                new_vel.angular.z = coeff_speed_vel * stop_angle_error
            else:
                new_vel.linear.z = 0.0
                print('Точка достигнута!')
                quit()
                
        self.vel_pub.publish(new_vel)

def main(args=None):
    rclpy.init(args=args)
    
    parser = argparse.ArgumentParser(description="Передвижение черепахи к цели")
    parser.add_argument('--x', type=float, default=5.5, help='X координата цели (default: 5.5)')
    parser.add_argument('--y', type=float, default=5.5, help='Y координата цели (default: 5.5)')
    parser.add_argument('--theta', type=float, default=0.0, help='Финальный угол цели (default: 0.0)')
    args = parser.parse_args()

    move_to_goal = MoveToGoal(args.x, args.y, args.theta)
    rclpy.spin(move_to_goal)
    move_to_goal.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
