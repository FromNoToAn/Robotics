import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math
import argparse


flag_1 = flag_2 = True
pose_flag = True

def point_on_line(start_point, angle, distance):
    x0, y0 = start_point
    dx = distance * math.cos(angle)
    dy = distance * math.sin(angle)
    if angle > 0:
        new_point = (x0 + dx, y0 + dy)
    else:
        new_point = (x0 + dx, y0 - dy)
    return new_point
    
def bezier_curve(p0, p1, p2, p3, t):
    x = (1 - t)**3 * p0[0] + 3 * (1 - t)**2 * t * p1[0] + 3 * (1 - t) * t**2 * p2[0] + t**3 * p3[0]
    y = (1 - t)**3 * p0[1] + 3 * (1 - t)**2 * t * p1[1] + 3 * (1 - t) * t**2 * p2[1] + t**3 * p3[1]
    return [x, y]

class MoveToGoal(Node):
    def __init__(self, target_x, target_y, target_theta):
        super().__init__('move_to_goal')
        self.target_x = target_x
        self.target_y = target_y
        self.target_theta = (target_theta + math.pi) % (2 * math.pi) - math.pi
        
        self.pose_sub = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        self.vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        self.lenght_sholder = 2.0
        self.p0 = None
        self.p1 = None
        self.p2 = point_on_line([target_x, target_y], target_theta, -self.lenght_sholder)
        self.p3 = [target_x, target_y]
        
        self.time = 0.0
        self.timer = self.create_timer(0.01, self.go_to_goal)
        self.pose = Pose()

    def pose_callback(self, data):
        global pose_flag
        self.pose = data
        if pose_flag:
            pose_flag = False
            self.p0 = [self.pose.x, self.pose.y]
            self.p1 = point_on_line([self.pose.x, self.pose.y], self.pose.theta, self.lenght_sholder)
            print(f'start {self.p0}, {self.p1}')
            print(f'end {self.p2}, {self.p3}')
            

    def go_to_goal(self):
        global flag_1
        global flag_2
        
        self.time += 0.01
        
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
