#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp"
using std::placeholders::_1;

using namespace std::chrono_literals;

class MiniParam : public rclcpp::Node
{
  public:
    MiniParam()
    : Node("listener")
    {
        
        subscription_ = this->create_subscription<geometry_msgs::msg::Pose>(
        "robot_position", 10, std::bind(&MiniParam::topic_callback, this, _1));
    }

  private:
    void topic_callback(const geometry_msgs::msg::Pose data)
    {
        RCLCPP_INFO_STREAM(this->get_logger(), "Received robot position: \nx: " << data.position.x  << 
        "\ny: "<< data.position.y << "\nz: "<< data.position.z<<"\n");
    }

    rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr subscription_;
    
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MiniParam>());
  rclcpp::shutdown();
  return 0;
}