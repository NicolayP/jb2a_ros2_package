# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node

from jb2a_msgs.msg import ServoState


from adafruit_servokit import ServoKit

class MinimalSubscriber(Node):
    # TODO: allow for arguments that modify the nuimber of servo and there angular llimits
    def __init__(self):
        super().__init__('adafruit_controller')

        self.kit = ServoKit(channels=16)
        self.get_logger().info('Node started, robot is up and running\n')
        self.subscription = self.create_subscription(ServoState, 'topic', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        '''
        Receives message of robot configuration from angles between
        [0; xlim] to [0; 180] using a linear transformation;

        inputs:
        -------
            message type: <jb2a_msgs Servostate>.

        outpue:
        -------
            None
        '''

        # TODO: Add parameters to allow for different servos: Will be done if different
        # Servos are used and should then be a heritage from a abstract servo class.
        xlim = 120.
        m = xlim/180.
        self.kit.servo[0].angle = m * msg.servo_state[0]
        self.kit.servo[1].angle = m * msg.servo_state[1]
        self.kit.servo[2].angle = m * msg.servo_state[2]
        self.kit.servo[3].angle = m * msg.servo_state[3]
        self.kit.servo[4].angle = m * msg.servo_state[4]
        self.kit.servo[5].angle = m * msg.servo_state[5]

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
