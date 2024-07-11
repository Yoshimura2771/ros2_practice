// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_messages:srv/CalcTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_MESSAGES__SRV__DETAIL__CALC_TWO_FLOATS__BUILDER_HPP_
#define MY_MESSAGES__SRV__DETAIL__CALC_TWO_FLOATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_messages/srv/detail/calc_two_floats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_messages
{

namespace srv
{

namespace builder
{

class Init_CalcTwoFloats_Request_b
{
public:
  explicit Init_CalcTwoFloats_Request_b(::my_messages::srv::CalcTwoFloats_Request & msg)
  : msg_(msg)
  {}
  ::my_messages::srv::CalcTwoFloats_Request b(::my_messages::srv::CalcTwoFloats_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_messages::srv::CalcTwoFloats_Request msg_;
};

class Init_CalcTwoFloats_Request_a
{
public:
  Init_CalcTwoFloats_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalcTwoFloats_Request_b a(::my_messages::srv::CalcTwoFloats_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_CalcTwoFloats_Request_b(msg_);
  }

private:
  ::my_messages::srv::CalcTwoFloats_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_messages::srv::CalcTwoFloats_Request>()
{
  return my_messages::srv::builder::Init_CalcTwoFloats_Request_a();
}

}  // namespace my_messages


namespace my_messages
{

namespace srv
{

namespace builder
{

class Init_CalcTwoFloats_Response_diff
{
public:
  explicit Init_CalcTwoFloats_Response_diff(::my_messages::srv::CalcTwoFloats_Response & msg)
  : msg_(msg)
  {}
  ::my_messages::srv::CalcTwoFloats_Response diff(::my_messages::srv::CalcTwoFloats_Response::_diff_type arg)
  {
    msg_.diff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_messages::srv::CalcTwoFloats_Response msg_;
};

class Init_CalcTwoFloats_Response_sum
{
public:
  Init_CalcTwoFloats_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalcTwoFloats_Response_diff sum(::my_messages::srv::CalcTwoFloats_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return Init_CalcTwoFloats_Response_diff(msg_);
  }

private:
  ::my_messages::srv::CalcTwoFloats_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_messages::srv::CalcTwoFloats_Response>()
{
  return my_messages::srv::builder::Init_CalcTwoFloats_Response_sum();
}

}  // namespace my_messages

#endif  // MY_MESSAGES__SRV__DETAIL__CALC_TWO_FLOATS__BUILDER_HPP_
