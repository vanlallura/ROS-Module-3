// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/MultiTwoInts.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__MULTI_TWO_INTS__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__MULTI_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MultiTwoInts in the package custom_interfaces.
typedef struct custom_interfaces__srv__MultiTwoInts_Request
{
  int32_t x;
  int32_t y;
} custom_interfaces__srv__MultiTwoInts_Request;

// Struct for a sequence of custom_interfaces__srv__MultiTwoInts_Request.
typedef struct custom_interfaces__srv__MultiTwoInts_Request__Sequence
{
  custom_interfaces__srv__MultiTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__MultiTwoInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MultiTwoInts in the package custom_interfaces.
typedef struct custom_interfaces__srv__MultiTwoInts_Response
{
  int32_t result;
} custom_interfaces__srv__MultiTwoInts_Response;

// Struct for a sequence of custom_interfaces__srv__MultiTwoInts_Response.
typedef struct custom_interfaces__srv__MultiTwoInts_Response__Sequence
{
  custom_interfaces__srv__MultiTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__MultiTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__MULTI_TWO_INTS__STRUCT_H_
