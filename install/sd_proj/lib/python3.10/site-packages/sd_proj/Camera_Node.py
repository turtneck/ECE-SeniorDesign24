import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import time
#import numpy

class DisparitySubscriber(Node):
    def __init__(self,verbose=False):
        ###fix QOS policy
        super().__init__('disparity_subscriber')  #name of node
        self.subscription = self.create_subscription(
            Image,
            '/multisense/left/disparity',  # stream
            self.jonah_code1,  # function called
            QoSProfile(depth=5, reliability=ReliabilityPolicy.BEST_EFFORT, history=HistoryPolicy.KEEP_LAST)  # QoS profile
        )
        self.subscription  # prevent unused variable warning
        
        self.verbose=verbose
        self.first_try=True
        self.bridge = CvBridge()#lets you convert to cv2
        self.lastupdate= time.time()
        self.want=None

    #called whenever msg is sent out (subscription)
    def jonah_code1(self, msg):
        #print("DisparitySubscriber\tGOT MESSAGE")
        self.lastupdate= time.time()
        if self.verbose: print("DisparitySubscriber\tlastupdate: ",self.lastupdate)
        #  msg is the Image (sensor_msgs.msg), convert to cv2
        self.want= self.bridge.imgmsg_to_cv2(msg, desired_encoding="passthrough")
        #print(numpy.max(self.want))
        #print("DisparitySubscriber\ttype: ",type(self.want))
        if self.first_try and self.want is not None:
            self.first_try=False
            if not self.verbose: print("ColorImgSubscriber\tGOT MESSAGE, Start")

    #unused, example func
    def runOnce(self):
        rclpy.spin_once(self, timeout_sec=0.01)


class ColorImgSubscriber(Node):
    def __init__(self,verbose=False):
        ###fix QOS policy
        super().__init__('colorimg_subscriber')  #name of node
        self.subscription = self.create_subscription(
            Image,
            '/multisense/left/image_rect',  # stream
            self.jonah_code2,  # function called
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT, history=HistoryPolicy.KEEP_LAST)  # QoS profile
        )
        self.subscription  # prevent unused variable warning
        
        self.verbose=verbose
        self.first_try=True
        self.bridge = CvBridge()#lets you convert to cv2
        self.lastupdate= time.time()
        self.want=None

    #called whenever msg is sent out (subscription)
    def jonah_code2(self, msg):
        #print("ColorImgSubscriber\tGOT MESSAGE")
        self.lastupdate= time.time()
        if self.verbose: print("ColorImgSubscriber\tlastupdate: ",self.lastupdate)
        #msg is the Image (sensor_msgs.msg), convert to cv2
        self.want= self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
        if self.first_try and self.want is not None:
            self.first_try=False
            if not self.verbose: print("ColorImgSubscriber\tGOT MESSAGE, Start")

    def runOnce(self):
        rclpy.spin_once(self, timeout_sec=0.01)


if __name__ == '__main__':
    rclpy.init()
    minimal_subscriber = DisparitySubscriber()
    minimal_subscriber2 = ColorImgSubscriber()
    print("ROS SUB MAIN PASS")
    rclpy.spin(minimal_subscriber)
    #minimal_subscriber.runOnce()
    print("ROS MAIN ran once")

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()
