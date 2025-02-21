// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from experiment_interfaces:msg/Birthday.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__STRUCT_H_
#define EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Birthday in the package experiment_interfaces.
typedef struct experiment_interfaces__msg__Birthday
{
  int32_t year;
  int32_t month;
  int32_t day;
} experiment_interfaces__msg__Birthday;

// Struct for a sequence of experiment_interfaces__msg__Birthday.
typedef struct experiment_interfaces__msg__Birthday__Sequence
{
  experiment_interfaces__msg__Birthday * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} experiment_interfaces__msg__Birthday__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__STRUCT_H_
