import rclpy
from rclpy.node import Node

from experiment_interfaces.msg import Num

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_=self.create_publisher(Num, 'topic', 10)
        timer_period=0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i=0

    def timer_callback(self):
        msg =Num()
        msg.num= self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing:"%d" % msg.num')
        self.i =+1

def main(args=None):
    rclpy.init(args=args)


    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

    
