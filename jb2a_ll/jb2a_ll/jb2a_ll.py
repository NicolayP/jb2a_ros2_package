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

from std_msgs.msg import String
from jb2a_msgs.msg import ServoState

import numpy as np

class Jb2a_ll(Node):
    # TODO: Extend to accept a robot config file.
    # TODO: Ins't it better to implement this as a service? Same for llc.
    def __init__(self):
        super().__init__('jb2a_ll')

        #self.robot = np.zeros(6)
        init_state = [90, 0, 180, 180, 180, 0]
        self.robot = init_state
        self.get_logger().info("{}".format(type(self.robot)))
        self.publisher_ = self.create_publisher(ServoState, 'topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def to_robot(self, msg):
        self.robot[0] = msg.joint[0]
        self.robot[1] = msg.joint[1]
        self.robot[2] = np.uint8(-msg.joint[1] + 180)
        self.robot[3] = msg.joint[2]
        self.robot[4] = msg.joint[3]
        self.robot[5] = msg.joint[4]

    def timer_callback(self):
        msg = ServoState()
        msg.servo_state = self.robot
        self.publisher_.publish(msg)



def main(args=None):
    rclpy.init(args=args)

    jb2a_ll = Jb2a_ll()

    rclpy.spin(jb2a_ll)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    jb2a_ll.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
