#include <cmath>
#include <memory>
#include <utility>

#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "nexus_base_ros/srv/arming_enable.hpp"
#include "nexus_base_ros/srv/emergency_stop_enable.hpp"

namespace {
constexpr int kQueueSize = 16;
}

class TeleopJoy : public rclcpp::Node {
public:
  TeleopJoy()
  : Node("nexus_teleop_joy"),
    armed_(true) {
    axis_linear_x_ = declare_parameter<int>("axis_linear_x", 3);
    axis_linear_y_ = declare_parameter<int>("axis_linear_y", 2);
    axis_angular_z_ = declare_parameter<int>("axis_angular_z", 0);
    max_vel_x_ = declare_parameter<double>("max_vel_x", 0.3);
    max_vel_y_ = declare_parameter<double>("max_vel_y", 0.3);
    max_vel_th_ = declare_parameter<double>("max_vel_th", M_PI_4);

    vel_pub_ = create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 1);
    joy_sub_ = create_subscription<sensor_msgs::msg::Joy>(
      "joy",
      kQueueSize,
      std::bind(&TeleopJoy::joyCallback, this, std::placeholders::_1));

    emergency_cli_ = create_client<nexus_base_ros::srv::EmergencyStopEnable>("emergency_stop_enable");
    arming_cli_ = create_client<nexus_base_ros::srv::ArmingEnable>("arming_enable");
  } 

private:
  void joyCallback(const sensor_msgs::msg::Joy::SharedPtr msg) {
    geometry_msgs::msg::Twist vel;
    if (armed_) {
      if (static_cast<size_t>(axis_linear_x_) < msg->axes.size()) {
        vel.linear.x = max_vel_x_ * msg->axes[axis_linear_x_];
      }
      if (static_cast<size_t>(axis_linear_y_) < msg->axes.size()) {
        vel.linear.y = max_vel_y_ * msg->axes[axis_linear_y_];
      }
      if (static_cast<size_t>(axis_angular_z_) < msg->axes.size()) {
        vel.angular.z = max_vel_th_ * msg->axes[axis_angular_z_];
      }
    }

    if (msg->buttons.size() > 1 && msg->buttons[1]) {
      sendArming(true);
    }
    if (msg->buttons.size() > 2 && msg->buttons[2]) {
      sendEmergencyStop(true);
    }

    vel_pub_->publish(vel);
  }

  void sendEmergencyStop(bool enable) {
    if (!emergency_cli_->service_is_ready()) {
      RCLCPP_WARN(get_logger(), "EmergencyStop service not available");
      return;
    }
    auto req = std::make_shared<nexus_base_ros::srv::EmergencyStopEnable::Request>();
    req->enable = enable;
    auto future = emergency_cli_->async_send_request(
      req,
      [this](rclcpp::Client<nexus_base_ros::srv::EmergencyStopEnable>::SharedFuture result) {
        armed_ = false;
        RCLCPP_INFO(get_logger(), "Emergency stop: %s", result.get()->success ? "true" : "false");
      });
    (void)future;
  }

  void sendArming(bool enable) {
    if (!arming_cli_->service_is_ready()) {
      RCLCPP_WARN(get_logger(), "Arming service not available");
      return;
    }
    auto req = std::make_shared<nexus_base_ros::srv::ArmingEnable::Request>();
    req->enable = enable;
    auto future = arming_cli_->async_send_request(
      req,
      [this](rclcpp::Client<nexus_base_ros::srv::ArmingEnable>::SharedFuture result) {
        armed_ = true;
        RCLCPP_INFO(get_logger(), "Arming: %s", result.get()->success ? "true" : "false");
      });
    (void)future;
  }

  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr vel_pub_;
  rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr joy_sub_;
  rclcpp::Client<nexus_base_ros::srv::EmergencyStopEnable>::SharedPtr emergency_cli_;
  rclcpp::Client<nexus_base_ros::srv::ArmingEnable>::SharedPtr arming_cli_;

  int axis_linear_x_;
  int axis_linear_y_;
  int axis_angular_z_;
  double max_vel_x_;
  double max_vel_y_;
  double max_vel_th_;
  std::atomic<bool> armed_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TeleopJoy>());
  rclcpp::shutdown();
  return 0;
}
