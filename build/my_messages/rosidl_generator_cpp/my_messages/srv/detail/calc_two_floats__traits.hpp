// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_messages:srv/CalcTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_MESSAGES__SRV__DETAIL__CALC_TWO_FLOATS__TRAITS_HPP_
#define MY_MESSAGES__SRV__DETAIL__CALC_TWO_FLOATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_messages/srv/detail/calc_two_floats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_messages
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalcTwoFloats_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTwoFloats_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTwoFloats_Request & msg, bool use_flow_style = false)
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

}  // namespace my_messages

namespace rosidl_generator_traits
{

[[deprecated("use my_messages::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_messages::srv::CalcTwoFloats_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_messages::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_messages::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_messages::srv::CalcTwoFloats_Request & msg)
{
  return my_messages::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_messages::srv::CalcTwoFloats_Request>()
{
  return "my_messages::srv::CalcTwoFloats_Request";
}

template<>
inline const char * name<my_messages::srv::CalcTwoFloats_Request>()
{
  return "my_messages/srv/CalcTwoFloats_Request";
}

template<>
struct has_fixed_size<my_messages::srv::CalcTwoFloats_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_messages::srv::CalcTwoFloats_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_messages::srv::CalcTwoFloats_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_messages
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalcTwoFloats_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << ", ";
  }

  // member: diff
  {
    out << "diff: ";
    rosidl_generator_traits::value_to_yaml(msg.diff, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalcTwoFloats_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }

  // member: diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff: ";
    rosidl_generator_traits::value_to_yaml(msg.diff, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalcTwoFloats_Response & msg, bool use_flow_style = false)
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

}  // namespace my_messages

namespace rosidl_generator_traits
{

[[deprecated("use my_messages::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_messages::srv::CalcTwoFloats_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_messages::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_messages::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_messages::srv::CalcTwoFloats_Response & msg)
{
  return my_messages::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_messages::srv::CalcTwoFloats_Response>()
{
  return "my_messages::srv::CalcTwoFloats_Response";
}

template<>
inline const char * name<my_messages::srv::CalcTwoFloats_Response>()
{
  return "my_messages/srv/CalcTwoFloats_Response";
}

template<>
struct has_fixed_size<my_messages::srv::CalcTwoFloats_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_messages::srv::CalcTwoFloats_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_messages::srv::CalcTwoFloats_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_messages::srv::CalcTwoFloats>()
{
  return "my_messages::srv::CalcTwoFloats";
}

template<>
inline const char * name<my_messages::srv::CalcTwoFloats>()
{
  return "my_messages/srv/CalcTwoFloats";
}

template<>
struct has_fixed_size<my_messages::srv::CalcTwoFloats>
  : std::integral_constant<
    bool,
    has_fixed_size<my_messages::srv::CalcTwoFloats_Request>::value &&
    has_fixed_size<my_messages::srv::CalcTwoFloats_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_messages::srv::CalcTwoFloats>
  : std::integral_constant<
    bool,
    has_bounded_size<my_messages::srv::CalcTwoFloats_Request>::value &&
    has_bounded_size<my_messages::srv::CalcTwoFloats_Response>::value
  >
{
};

template<>
struct is_service<my_messages::srv::CalcTwoFloats>
  : std::true_type
{
};

template<>
struct is_service_request<my_messages::srv::CalcTwoFloats_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_messages::srv::CalcTwoFloats_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_MESSAGES__SRV__DETAIL__CALC_TWO_FLOATS__TRAITS_HPP_
