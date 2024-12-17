#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp"

using namespace std::chrono_literals;

class MiniParam : public rclcpp::Node
{
  public:
    MiniParam()
    : Node("speaker")
    {
      this->declare_parameter("my_parameter",2.0);//upload param values to the server (set default param value)
      publisher_ = this->create_publisher<geometry_msgs::msg::Pose>("robot_position", 10);
      timer_ = this->create_wall_timer(
      2000ms, std::bind(&MiniParam::timer_callback, this));
    }

  private:
    void timer_callback()
    {
        float my_param = this->get_parameter("my_parameter").get_parameter_value().get<float>();
        geometry_msgs::msg::Pose new_param;
        new_param.position.x = my_param;
        new_param.position.y = my_param +1;
        new_param.position.z = my_param+2;
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Published robot pose:\n x = %f\n y = %f\n z = %f\n",
         new_param.position.x, new_param.position.y, new_param.position.z);
        publisher_ -> publish(new_param);
    }
    
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Pose>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MiniParam>());
  rclcpp::shutdown();
  return 0;
}