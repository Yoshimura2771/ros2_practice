// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_messages:msg/TwoInts.idl
// generated code does not contain a copyright notice

#ifndef MY_MESSAGES__MSG__DETAIL__TWO_INTS__TRAITS_HPP_
#define MY_MESSAGES__MSG__DETAIL__TWO_INTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_messages/msg/detail/two_ints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const TwoInts & msg,
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
  const TwoInts & msg,
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

inline std::string to_yaml(const TwoInts & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_messages

namespace rosidl_generator_traits
{

[[deprecated("use my_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_messages::msg::TwoInts & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_messages::msg::TwoInts & msg)
{
  return my_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_messages::msg::TwoInts>()
{
  return "my_messages::msg::TwoInts";
}

template<>
inline const char * name<my_messages::msg::TwoInts>()
{
  return "my_messages/msg/TwoInts";
}

template<>
struct has_fixed_size<my_messages::msg::TwoInts>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_messages::msg::TwoInts>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_messages::msg::TwoInts>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_MESSAGES__MSG__DETAIL__TWO_INTS__TRAITS_HPP_
