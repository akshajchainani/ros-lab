// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from experiment_interfaces:srv/TurtleControl.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__STRUCT_H_
#define EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TurtleControl in the package experiment_interfaces.
typedef struct experiment_interfaces__srv__TurtleControl_Request
{
  float velocity;
  float angle;
} experiment_interfaces__srv__TurtleControl_Request;

// Struct for a sequence of experiment_interfaces__srv__TurtleControl_Request.
typedef struct experiment_interfaces__srv__TurtleControl_Request__Sequence
{
  experiment_interfaces__srv__TurtleControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} experiment_interfaces__srv__TurtleControl_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TurtleControl in the package experiment_interfaces.
typedef struct experiment_interfaces__srv__TurtleControl_Response
{
  rosidl_runtime_c__String msg;
} experiment_interfaces__srv__TurtleControl_Response;

// Struct for a sequence of experiment_interfaces__srv__TurtleControl_Response.
typedef struct experiment_interfaces__srv__TurtleControl_Response__Sequence
{
  experiment_interfaces__srv__TurtleControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} experiment_interfaces__srv__TurtleControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__STRUCT_H_
