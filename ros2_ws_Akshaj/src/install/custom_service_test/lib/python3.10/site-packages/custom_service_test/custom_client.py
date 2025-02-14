import rclpy
from rclpy.node import Node
from experiment_interfaces.srv import AddThreeInts
import sys

class MinimalClientAsync(Node):
    
    def __init__(self):
        super().__init__('test_client')
        self.cli = self.create_client(AddThreeInts, 'add_three_ints')

        # Wait for service to be available
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        
        self.req = AddThreeInts.Request()
        
    def send_request(self, a: int, b: int, c: int):
        self.req.a = a
        self.req.b = b
        self.req.c = c
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)
    
    # Ensure correct argument usage
    if len(sys.argv) != 4:
        print("Usage: ros2 run <your_package_name> test_client X Y Z")
        return

    try:
        a, b, c = int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3])
    except ValueError:
        print("Error: Arguments must be integers.")
        return

    minimal_client = MinimalClientAsync()
    minimal_client.send_request(a, b, c)
    
    while rclpy.ok():
        rclpy.spin_once(minimal_client)
        if minimal_client.future.done():
            try:
                response = minimal_client.future.result()
            except Exception as e:
                minimal_client.get_logger().error(f"Service call failed: {e}")
            else:
                minimal_client.get_logger().info(
                    f"Result of add_three_ints: {a} + {b} + {c} = {response.sum}"
                )
            break
        
    minimal_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
