// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/MultiTwoInts.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__MULTI_TWO_INTS__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__MULTI_TWO_INTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/srv/detail/multi_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MultiTwoInts_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MultiTwoInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MultiTwoInts_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::MultiTwoInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::MultiTwoInts_Request & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::MultiTwoInts_Request>()
{
  return "custom_interfaces::srv::MultiTwoInts_Request";
}

template<>
inline const char * name<custom_interfaces::srv::MultiTwoInts_Request>()
{
  return "custom_interfaces/srv/MultiTwoInts_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::MultiTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::MultiTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::MultiTwoInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MultiTwoInts_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MultiTwoInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MultiTwoInts_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::srv::MultiTwoInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::srv::MultiTwoInts_Response & msg)
{
  return custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::srv::MultiTwoInts_Response>()
{
  return "custom_interfaces::srv::MultiTwoInts_Response";
}

template<>
inline const char * name<custom_interfaces::srv::MultiTwoInts_Response>()
{
  return "custom_interfaces/srv/MultiTwoInts_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::MultiTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::srv::MultiTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::srv::MultiTwoInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::MultiTwoInts>()
{
  return "custom_interfaces::srv::MultiTwoInts";
}

template<>
inline const char * name<custom_interfaces::srv::MultiTwoInts>()
{
  return "custom_interfaces/srv/MultiTwoInts";
}

template<>
struct has_fixed_size<custom_interfaces::srv::MultiTwoInts>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::MultiTwoInts_Request>::value &&
    has_fixed_size<custom_interfaces::srv::MultiTwoInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::MultiTwoInts>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::MultiTwoInts_Request>::value &&
    has_bounded_size<custom_interfaces::srv::MultiTwoInts_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::MultiTwoInts>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::MultiTwoInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::MultiTwoInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__MULTI_TWO_INTS__TRAITS_HPP_
