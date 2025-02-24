import rclpy
from rclpy.node import Node
from turtlesim.srv import SetPen
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class TurtleAutoController(Node):
    def __init__(self):
        super().__init__('turtle_auto_controller')

        # Client for /turtle1/set_pen service
        self.pen_client = self.create_client(SetPen, '/turtle1/set_pen')
        while not self.pen_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/turtle1/set_pen service not available, waiting...')

        # Subscriber to the turtle's pose
        self.pose_subscriber = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.pose_callback,
            10
        )

        # Publisher to control turtle velocity
        self.velocity_publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        # Initial direction
        self.direction = 1.0
        self.get_logger().info('TurtleAutoController node has been started.')

    def pose_callback(self, msg):
        # Change pen color based on horizontal position
        if msg.x > 5.5:
            self.set_pen(255, 0, 0, 3, 0)  # Red pen on right half
        else:
            self.set_pen(0, 255, 0, 3, 0)  # Green pen on left half

        # Autonomous movement with wall collision avoidance
        twist = Twist()
        if msg.x >= 10.5 or msg.x <= 0.5:
            self.direction *= -1  # Reverse direction on X-axis collision
            twist.angular.z = 1.57  # Turn 90 degrees
        elif msg.y >= 10.5 or msg.y <= 0.5:
            self.direction *= -1  # Reverse direction on Y-axis collision
            twist.angular.z = 1.57  # Turn 90 degrees
        else:
            twist.linear.x = 1.5 * self.direction

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
    node = TurtleAutoController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
