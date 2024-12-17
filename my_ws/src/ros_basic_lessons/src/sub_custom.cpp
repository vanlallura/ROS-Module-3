#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/person_info.hpp"
using std::placeholders::_1;

using namespace std::chrono_literals;

class MinimalSubscriber : public rclcpp::Node
{
  public:
    MinimalSubscriber()
    : Node("receptionist")
    {
        subscription_ = this->create_subscription<custom_interfaces::msg::PersonInfo>(
        "my_info", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    }

  private:
    void topic_callback(const custom_interfaces::msg::PersonInfo data)
    {
        RCLCPP_INFO_STREAM(this->get_logger(), "Your Information: \nName: " << data.name  << 
        "\nAge: "<< data.age << "\nHeight: "<< data.height<<"cm\n");
    }

    rclcpp::Subscription<custom_interfaces::msg::PersonInfo>::SharedPtr subscription_;
    
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}