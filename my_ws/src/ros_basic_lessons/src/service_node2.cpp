#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/srv/multi_two_ints.hpp"

#include <memory>
#include <chrono>
#include <cstdlib>

void multi(const std::shared_ptr<custom_interfaces::srv::MultiTwoInts::Request> request ,
          std::shared_ptr<custom_interfaces::srv::MultiTwoInts::Response> response)
{
  response->result = request->x * request->y;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\nx: %d" " y: %d",
                request->x, request->y);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%d]", response->result);
  
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("service_node2");

  //for service
  if (argc == 2) // change argc == 1 if you are running with CLI
  {
    rclcpp::Service<custom_interfaces::srv::MultiTwoInts>::SharedPtr service =
    node->create_service<custom_interfaces::srv::MultiTwoInts>("multi_two_ints", &multi);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Node2 is running as a server...");
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to multiply two ints...");
    rclcpp::spin(node);
  }

  //for client
  else if (argc == 4) // change argc == 3 if you are running with CLI
  {
    rclcpp::Client<custom_interfaces::srv::MultiTwoInts>::SharedPtr client =
      node->create_client<custom_interfaces::srv::MultiTwoInts>("multi_two_ints");
    
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Node2 is running as a client...");

    auto request = std::make_shared<custom_interfaces::srv::MultiTwoInts::Request>();
    request->x = atoll(argv[1]);
    request->y = atoll(argv[2]);
    
    while (!client->wait_for_service(std::chrono::seconds(1))) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
        return 0;
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
    }
    
    auto res = client->async_send_request(request);
    // Wait for the result.
    if (rclcpp::spin_until_future_complete(node, res) ==
      rclcpp::FutureReturnCode::SUCCESS)
    {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Multiplication of two numbers: %d", res.get()->result);
    }
    else {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service MultiTwoInts");
    }
  }

  else{
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "\nusage: \nsrv_node2 X Y (for client)\nsrv_node2 (for service)");
      return 1;
  }

  rclcpp::shutdown();
}

