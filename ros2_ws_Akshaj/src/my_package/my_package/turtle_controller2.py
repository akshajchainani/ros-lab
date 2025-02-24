import rclpy
from rclpy.node import Node
from turtlesim.srv import SetPen
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class TurtleDecisionMaker(Node):
    def __init__(self):
        super().__init__('turtle_decision_maker')

        self.pen_client = self.create_client(SetPen, '/turtle1/set_pen')
        while not self.pen_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/turtle1/set_pen service not available, waiting...')

        self.pose_subscriber = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.pose_callback,
            10
        )

        self.velocity_publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        self.get_logger().info('TurtleDecisionMaker node started. Making real-time decisions based on position.')

    def pose_callback(self, msg):
        if msg.x > 5.5:
            self.set_pen(255, 0, 0, 3, 0)  
            self.get_logger().info(f'Red pen active at x: {msg.x:.2f}')
        else:
            self.set_pen(0, 255, 0, 3, 0)  
            self.get_logger().info(f'Green pen active at x: {msg.x:.2f}')

        twist = Twist()
        if msg.x >= 10.5 or msg.x <= 0.5:
            twist.angular.z = 2.0  
        elif msg.y >= 10.5 or msg.y <= 0.5:
            twist.angular.z = 2.0  
        else:
            twist.linear.x = 2.0  

        self.velocity_publisher.publish(twist)

    def set_pen(self, r, g, b, width, off):
        req = SetPen.Request()
        req.r = r
        req.g = g
        req.b = b
        req.width = width
        req.off = off
        self.pen_client.call_async(req)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleDecisionMaker()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()