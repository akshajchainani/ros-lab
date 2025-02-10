import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class SimplePublisher(Node):
     def __init__(self):
        super().__init__('draw_circle')
        self.publisher_ = self.create_publisher(Twist,'turtle1/cmd_vel',10)
        timer_period =0.1
        self.timer = self.create_timer(timer_period,self.timer_callback)

     def timer_callback(self):
         msg = Twist()
         msg.linear.x = 1.0
         msg.angular.z = 1.0
         self.publisher_.publish(msg)
         self.get_logger().info('Publishing "%s"' %msg)

def main(args=None):
    rclpy.init(args=args)
    node = SimplePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main() 