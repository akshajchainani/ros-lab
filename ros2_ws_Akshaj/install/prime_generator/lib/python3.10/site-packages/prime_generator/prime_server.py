import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from action_tutorials_interfaces.action import PrimeNumbers
import time

class PrimeNumbersServer(Node):

    def __init__(self):
        super().__init__('prime_server')
        self._action_server = ActionServer(
            self,
            PrimeNumbers,
            'prime_numbers',
            self.execute_callback
        )
        self.get_logger().info('Prime Numbers Action Server is running...')

    def execute_callback(self, goal_handle):
        n = goal_handle.request.n
        self.get_logger().info(f'Computing first {n} prime numbers...')

        primes = []
        num = 2  # Start checking from 2

        while len(primes) < n:
            if self.is_prime(num):
                primes.append(num)
                # Provide feedback
                goal_handle.publish_feedback(PrimeNumbers.Feedback(partial_result=primes))
            num += 1
            time.sleep(0.5)  # Simulate computation delay

        goal_handle.succeed()
        result = PrimeNumbers.Result()
        result.primes = primes
        return result

    def is_prime(self, num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

def main(args=None):
    rclpy.init(args=args)
    node = PrimeNumbersServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
