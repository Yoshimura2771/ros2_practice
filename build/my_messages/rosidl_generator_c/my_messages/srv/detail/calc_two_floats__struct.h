// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_messages:srv/CalcTwoFloats.idl
// generated code does not contain a copyright notice

#ifndef MY_MESSAGES__SRV__DETAIL__CALC_TWO_FLOATS__STRUCT_H_
#define MY_MESSAGES__SRV__DETAIL__CALC_TWO_FLOATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CalcTwoFloats in the package my_messages.
typedef struct my_messages__srv__CalcTwoFloats_Request
{
  double a;
  double b;
} my_messages__srv__CalcTwoFloats_Request;

// Struct for a sequence of my_messages__srv__CalcTwoFloats_Request.
typedef struct my_messages__srv__CalcTwoFloats_Request__Sequence
{
  my_messages__srv__CalcTwoFloats_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_messages__srv__CalcTwoFloats_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CalcTwoFloats in the package my_messages.
typedef struct my_messages__srv__CalcTwoFloats_Response
{
  double sum;
  double diff;
} my_messages__srv__CalcTwoFloats_Response;

// Struct for a sequence of my_messages__srv__CalcTwoFloats_Response.
typedef struct my_messages__srv__CalcTwoFloats_Response__Sequence
{
  my_messages__srv__CalcTwoFloats_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_messages__srv__CalcTwoFloats_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_MESSAGES__SRV__DETAIL__CALC_TWO_FLOATS__STRUCT_H_
