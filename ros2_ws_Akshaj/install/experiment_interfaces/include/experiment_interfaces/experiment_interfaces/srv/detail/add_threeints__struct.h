// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from experiment_interfaces:srv/AddThreeints.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__SRV__DETAIL__ADD_THREEINTS__STRUCT_H_
#define EXPERIMENT_INTERFACES__SRV__DETAIL__ADD_THREEINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddThreeints in the package experiment_interfaces.
typedef struct experiment_interfaces__srv__AddThreeints_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} experiment_interfaces__srv__AddThreeints_Request;

// Struct for a sequence of experiment_interfaces__srv__AddThreeints_Request.
typedef struct experiment_interfaces__srv__AddThreeints_Request__Sequence
{
  experiment_interfaces__srv__AddThreeints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} experiment_interfaces__srv__AddThreeints_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddThreeints in the package experiment_interfaces.
typedef struct experiment_interfaces__srv__AddThreeints_Response
{
  int64_t sum;
} experiment_interfaces__srv__AddThreeints_Response;

// Struct for a sequence of experiment_interfaces__srv__AddThreeints_Response.
typedef struct experiment_interfaces__srv__AddThreeints_Response__Sequence
{
  experiment_interfaces__srv__AddThreeints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} experiment_interfaces__srv__AddThreeints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXPERIMENT_INTERFACES__SRV__DETAIL__ADD_THREEINTS__STRUCT_H_
