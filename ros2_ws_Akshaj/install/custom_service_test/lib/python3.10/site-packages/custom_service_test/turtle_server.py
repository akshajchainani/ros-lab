import rclpy
from rclpy.node import Node
from experiment_interfaces.srv import TurtleControl
from geometry_msgs.msg import Twist

class TurtleServer(Node):
    def __init__(self):
        super().__init__('turtle_server')
        self.srv = self.create_service(TurtleControl, 'control_turtle', self.control_callback)
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.get_logger().info('Turtle Server Ready!')

    def control_callback(self, request, response):
        twist = Twist()
        twist.linear.x = request.velocity
        twist.angular.z = request.angle
        self.publisher.publish(twist)
        response.msg = f"Turtle moving at velocity {request.velocity} and angle {request.angle}"
        self.get_logger().info(response.msg)
        return response

def main(args=None):
    rclpy.init(args=args)
    server = TurtleServer()
    rclpy.spin(server)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
