import rclpy
from rclpy.node import Node
from experiment_interfaces.srv import AddThreeInts

class MinimalService(Node):

    def __init__ (self):
        super().__init__('minimal_service')
        self.srv = self.create_service(AddThreeInts,
                                       'add_three_ints',self.add_three_ints_callback)
        
    def add_three_ints_callback(self,request,response):
        response.sum = request.a + request.b +request.c
        self.get_logger().info('Incoming request\na: %d b: %d c: %d'
                               %(request.a, request.b, request.c))
        
        return response
    

def main(args=None):
    rclpy.init(args=args)
    minimal_service = MinimalService()
    
    try:
        rclpy.spin(minimal_service)
    except KeyboardInterrupt:
        minimal_service.get_logger().info('Shutting down service node...')
    finally:
        minimal_service.destroy_node()
        rclpy.shutdown()
    