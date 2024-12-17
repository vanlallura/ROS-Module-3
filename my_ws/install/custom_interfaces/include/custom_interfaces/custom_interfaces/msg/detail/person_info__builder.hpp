// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/PersonInfo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__PERSON_INFO__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__PERSON_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/person_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_PersonInfo_height
{
public:
  explicit Init_PersonInfo_height(::custom_interfaces::msg::PersonInfo & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::PersonInfo height(::custom_interfaces::msg::PersonInfo::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::PersonInfo msg_;
};

class Init_PersonInfo_age
{
public:
  explicit Init_PersonInfo_age(::custom_interfaces::msg::PersonInfo & msg)
  : msg_(msg)
  {}
  Init_PersonInfo_height age(::custom_interfaces::msg::PersonInfo::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_PersonInfo_height(msg_);
  }

private:
  ::custom_interfaces::msg::PersonInfo msg_;
};

class Init_PersonInfo_name
{
public:
  Init_PersonInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PersonInfo_age name(::custom_interfaces::msg::PersonInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PersonInfo_age(msg_);
  }

private:
  ::custom_interfaces::msg::PersonInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::PersonInfo>()
{
  return custom_interfaces::msg::builder::Init_PersonInfo_name();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__PERSON_INFO__BUILDER_HPP_
