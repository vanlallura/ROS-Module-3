#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/person_info.hpp"

using namespace std::chrono_literals;

class MinimalPublisher : public rclcpp::Node
{
  public:
    MinimalPublisher()
    : Node("person1")
    {
      publisher_ = this->create_publisher<custom_interfaces::msg::PersonInfo>("my_info", 10);
      timer_ = this->create_wall_timer(
      3000ms, std::bind(&MinimalPublisher::timer_callback, this));
    }

  private:
    void timer_callback()
    {
      auto info = custom_interfaces::msg::PersonInfo();
      info.name = "John Doe";
      info.age = 32;
      info.height = 185.5;
      RCLCPP_INFO_STREAM(this->get_logger(), "My name is " << info.name  << 
        ". I am : "<< info.age <<"years old."<< " My Height is "<< info.height<<"cm.\n");
      
      publisher_->publish(info);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<custom_interfaces::msg::PersonInfo>::SharedPtr publisher_;
    
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}