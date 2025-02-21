import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose

class TurtleController(Node):
    def __init__(self):
        super().__init__('turtle_controller')

        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        self.subscription = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        
        self.pose = Pose()

    def pose_callback(self, msg):
        self.pose = msg

        cmd = Twist()
        cmd.linear.x = 1.0  
        
        if self.pose.x >= 10.5 or self.pose.x <= 1.0 or self.pose.y >= 10.5 or self.pose.y <= 1.0:
            cmd.angular.z = 1.5  
        self.publisher_.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
