#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

class MiniParam : public rclcpp::Node
{
  public:
    MiniParam()
    : Node("turtle_square_publisher"), count_(0)
    {
      this->declare_parameter("scale",2.0);//upload param values to the server (set default param value)
      publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
      timer_ = this->create_wall_timer(
      2000ms, std::bind(&MiniParam::timer_callback, this));
    }

  private:
    void timer_callback(){
      geometry_msgs::msg::Twist turtle_data;
      int scale_factor = this->get_parameter("scale").get_parameter_value().get<float>();
      if (count_ == 0){
        turtle_data.linear.x = 1*scale_factor;
        turtle_data.linear.y = 0;
        turtle_data.linear.z = 0;
        count_++;
      }
      else if (count_ == 1){
        turtle_data.linear.x = 0;
        turtle_data.linear.y = 1*scale_factor;
        turtle_data.linear.z = 0;
        count_++;
      }
      else if (count_ == 2){
        turtle_data.linear.x = -1*scale_factor;
        turtle_data.linear.y = 0;
        turtle_data.linear.z = 0;
        count_++;
      }
      else if (count_ == 3){
        turtle_data.linear.x = 0;
        turtle_data.linear.y = -1*scale_factor;
        turtle_data.linear.z = 0;
        count_ = 0;
      }

      publisher_-> publish(turtle_data);
    }
    
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MiniParam>());
  rclcpp::shutdown();
  return 0;
}