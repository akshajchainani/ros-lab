from std_srvs.srv import Empty
import rclpy
from rclpy.node import Node

class ClientAsync(Node):
    def __init__(self):
        super().__init__('client')
        self.client = self.create_client(Empty, 'clear')
        
        while not self.client.wait_for_service(timeout_sec=0.5):
            self.get_logger().info('Service not available, waiting again...')
        
        self.req = Empty.Request()

    def send_request(self):
        self.future = self.client.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)
    client = ClientAsync()
    client.send_request()  # Fixed function call

    while rclpy.ok():
        rclpy.spin_once(client)
        if client.future.done():
            try:
                response = client.future.result()
            except Exception as e:
                client.get_logger().error(f'Service call failed: {e}')
            else:
                client.get_logger().info('The path is clear')
            break

    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
