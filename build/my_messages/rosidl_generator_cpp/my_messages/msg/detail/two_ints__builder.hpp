// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_messages:msg/TwoInts.idl
// generated code does not contain a copyright notice

#ifndef MY_MESSAGES__MSG__DETAIL__TWO_INTS__BUILDER_HPP_
#define MY_MESSAGES__MSG__DETAIL__TWO_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_messages/msg/detail/two_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_messages
{

namespace msg
{

namespace builder
{

class Init_TwoInts_b
{
public:
  explicit Init_TwoInts_b(::my_messages::msg::TwoInts & msg)
  : msg_(msg)
  {}
  ::my_messages::msg::TwoInts b(::my_messages::msg::TwoInts::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_messages::msg::TwoInts msg_;
};

class Init_TwoInts_a
{
public:
  Init_TwoInts_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwoInts_b a(::my_messages::msg::TwoInts::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TwoInts_b(msg_);
  }

private:
  ::my_messages::msg::TwoInts msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_messages::msg::TwoInts>()
{
  return my_messages::msg::builder::Init_TwoInts_a();
}

}  // namespace my_messages

#endif  // MY_MESSAGES__MSG__DETAIL__TWO_INTS__BUILDER_HPP_
