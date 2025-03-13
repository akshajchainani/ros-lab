import sys
import rclpy
from rclpy.node import Node
from experiment_interfaces.srv import TurtleControl

class TurtleClient(Node):
    def __init__(self):
        super().__init__('turtle_client')
        self.client = self.create_client(TurtleControl, 'control_turtle')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')
        self.req = TurtleControl.Request()

    def send_request(self, velocity, angle):
        self.req.velocity = velocity
        self.req.angle = angle
        future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

def main(args=None):
    rclpy.init(args=args)
    client = TurtleClient()
    velocity = float(sys.argv[1])
    angle = float(sys.argv[2])
    response = client.send_request(velocity, angle)
    client.get_logger().info(f'Response: {response.msg}')
    rclpy.shutdown()

if __name__ == '__main__':
    main()
