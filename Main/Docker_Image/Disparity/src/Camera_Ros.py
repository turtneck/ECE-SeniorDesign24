import rclpy 
from rclpy.node
import cv2
from cv_bridge import cv_bridge 
from sensor_msgs.msg import Image

class DisparitySubscriber(Node):
    def__init__(self):
        super().__init__('disparity_subscriber')
        self.subscription = self.create_subscription(Image,'/multisense_left/disparity',self.disparity_callback,10)
        self.subscription

    def disparity_callback(self,msg):
        bridge = CvBridge()
        try : 
            cv_image = bridge.immsg_to_cv2(msg,"bgr8")
        except CvBridgeError as e:
            print(e)

        cv2.imshow("Image window", cv_image)
        cv2.waitKey(3)

def main(args=None):
    rclpy.init(args=args)

    disparity_subscriber = DisparitySubscriber()
    rclpy.spin(disparity_subscriber)

if __name__ == '__main__':
   main()
