// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_messages:msg/TwoInts.idl
// generated code does not contain a copyright notice

#ifndef MY_MESSAGES__MSG__DETAIL__TWO_INTS__STRUCT_HPP_
#define MY_MESSAGES__MSG__DETAIL__TWO_INTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_messages__msg__TwoInts __attribute__((deprecated))
#else
# define DEPRECATED__my_messages__msg__TwoInts __declspec(deprecated)
#endif

namespace my_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwoInts_
{
  using Type = TwoInts_<ContainerAllocator>;

  explicit TwoInts_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit TwoInts_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_messages::msg::TwoInts_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_messages::msg::TwoInts_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_messages::msg::TwoInts_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_messages::msg::TwoInts_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_messages::msg::TwoInts_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_messages::msg::TwoInts_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_messages::msg::TwoInts_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_messages::msg::TwoInts_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_messages::msg::TwoInts_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_messages::msg::TwoInts_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_messages__msg__TwoInts
    std::shared_ptr<my_messages::msg::TwoInts_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_messages__msg__TwoInts
    std::shared_ptr<my_messages::msg::TwoInts_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwoInts_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwoInts_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwoInts_

// alias to use template instance with default allocator
using TwoInts =
  my_messages::msg::TwoInts_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_messages

#endif  // MY_MESSAGES__MSG__DETAIL__TWO_INTS__STRUCT_HPP_
