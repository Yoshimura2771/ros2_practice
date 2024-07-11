// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_messages:msg/TwoInts.idl
// generated code does not contain a copyright notice

#ifndef MY_MESSAGES__MSG__DETAIL__TWO_INTS__STRUCT_H_
#define MY_MESSAGES__MSG__DETAIL__TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TwoInts in the package my_messages.
typedef struct my_messages__msg__TwoInts
{
  int64_t a;
  int64_t b;
} my_messages__msg__TwoInts;

// Struct for a sequence of my_messages__msg__TwoInts.
typedef struct my_messages__msg__TwoInts__Sequence
{
  my_messages__msg__TwoInts * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_messages__msg__TwoInts__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_MESSAGES__MSG__DETAIL__TWO_INTS__STRUCT_H_
