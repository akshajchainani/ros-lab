// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from experiment_interfaces:msg/Birthday.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__FUNCTIONS_H_
#define EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "experiment_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "experiment_interfaces/msg/detail/birthday__struct.h"

/// Initialize msg/Birthday message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * experiment_interfaces__msg__Birthday
 * )) before or use
 * experiment_interfaces__msg__Birthday__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__msg__Birthday__init(experiment_interfaces__msg__Birthday * msg);

/// Finalize msg/Birthday message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__msg__Birthday__fini(experiment_interfaces__msg__Birthday * msg);

/// Create msg/Birthday message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * experiment_interfaces__msg__Birthday__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
experiment_interfaces__msg__Birthday *
experiment_interfaces__msg__Birthday__create();

/// Destroy msg/Birthday message.
/**
 * It calls
 * experiment_interfaces__msg__Birthday__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__msg__Birthday__destroy(experiment_interfaces__msg__Birthday * msg);

/// Check for msg/Birthday message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__msg__Birthday__are_equal(const experiment_interfaces__msg__Birthday * lhs, const experiment_interfaces__msg__Birthday * rhs);

/// Copy a msg/Birthday message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__msg__Birthday__copy(
  const experiment_interfaces__msg__Birthday * input,
  experiment_interfaces__msg__Birthday * output);

/// Initialize array of msg/Birthday messages.
/**
 * It allocates the memory for the number of elements and calls
 * experiment_interfaces__msg__Birthday__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__msg__Birthday__Sequence__init(experiment_interfaces__msg__Birthday__Sequence * array, size_t size);

/// Finalize array of msg/Birthday messages.
/**
 * It calls
 * experiment_interfaces__msg__Birthday__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__msg__Birthday__Sequence__fini(experiment_interfaces__msg__Birthday__Sequence * array);

/// Create array of msg/Birthday messages.
/**
 * It allocates the memory for the array and calls
 * experiment_interfaces__msg__Birthday__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
experiment_interfaces__msg__Birthday__Sequence *
experiment_interfaces__msg__Birthday__Sequence__create(size_t size);

/// Destroy array of msg/Birthday messages.
/**
 * It calls
 * experiment_interfaces__msg__Birthday__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__msg__Birthday__Sequence__destroy(experiment_interfaces__msg__Birthday__Sequence * array);

/// Check for msg/Birthday message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__msg__Birthday__Sequence__are_equal(const experiment_interfaces__msg__Birthday__Sequence * lhs, const experiment_interfaces__msg__Birthday__Sequence * rhs);

/// Copy an array of msg/Birthday messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__msg__Birthday__Sequence__copy(
  const experiment_interfaces__msg__Birthday__Sequence * input,
  experiment_interfaces__msg__Birthday__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__FUNCTIONS_H_
