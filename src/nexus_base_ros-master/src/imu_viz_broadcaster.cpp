#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2_ros/transform_broadcaster.h"

class ImuVizBroadcaster : public rclcpp::Node {
public:
  ImuVizBroadcaster()
  : Node("imu_viz_broadcaster")
  {
    // params
    parent_frame_ = this->declare_parameter<std::string>("parent_frame", "base_link");
    child_frame_  = this->declare_parameter<std::string>("child_frame",  "imu_link");
    imu_topic_    = this->declare_parameter<std::string>("imu_topic","/bno055/imu");

    tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);

    sub_ = this->create_subscription<sensor_msgs::msg::Imu>(
      imu_topic_,
      rclcpp::SensorDataQoS(),
      std::bind(&ImuVizBroadcaster::cb, this, std::placeholders::_1)
    );

    RCLCPP_INFO(get_logger(),
      "Listening: %s | TF: %s -> %s",
      imu_topic_.c_str(), parent_frame_.c_str(), child_frame_.c_str());
  }

private:
  void cb(const sensor_msgs::msg::Imu::SharedPtr msg)
  {
    geometry_msgs::msg::TransformStamped t;
    t.header.stamp = msg->header.stamp;   // use IMU timestamp
    t.header.frame_id = parent_frame_;
    t.child_frame_id  = child_frame_;

    // just for visualization: put it at the origin of parent
    t.transform.translation.x = 0.0;
    t.transform.translation.y = 0.0;
    t.transform.translation.z = 0.0;

    // orientation from IMU
    t.transform.rotation = msg->orientation;

    tf_broadcaster_->sendTransform(t);
  }

  std::string parent_frame_;
  std::string child_frame_;
  std::string imu_topic_;

  rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr sub_;
  std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ImuVizBroadcaster>());
  rclcpp::shutdown();
  return 0;
}
