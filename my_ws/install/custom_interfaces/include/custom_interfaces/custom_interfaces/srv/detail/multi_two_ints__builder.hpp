// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/MultiTwoInts.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__MULTI_TWO_INTS__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__MULTI_TWO_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/multi_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_MultiTwoInts_Request_y
{
public:
  explicit Init_MultiTwoInts_Request_y(::custom_interfaces::srv::MultiTwoInts_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::MultiTwoInts_Request y(::custom_interfaces::srv::MultiTwoInts_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::MultiTwoInts_Request msg_;
};

class Init_MultiTwoInts_Request_x
{
public:
  Init_MultiTwoInts_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiTwoInts_Request_y x(::custom_interfaces::srv::MultiTwoInts_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MultiTwoInts_Request_y(msg_);
  }

private:
  ::custom_interfaces::srv::MultiTwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::MultiTwoInts_Request>()
{
  return custom_interfaces::srv::builder::Init_MultiTwoInts_Request_x();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_MultiTwoInts_Response_result
{
public:
  Init_MultiTwoInts_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::MultiTwoInts_Response result(::custom_interfaces::srv::MultiTwoInts_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::MultiTwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::MultiTwoInts_Response>()
{
  return custom_interfaces::srv::builder::Init_MultiTwoInts_Response_result();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__MULTI_TWO_INTS__BUILDER_HPP_
