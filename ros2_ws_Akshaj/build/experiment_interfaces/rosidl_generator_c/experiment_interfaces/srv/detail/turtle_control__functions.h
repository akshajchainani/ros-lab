// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from experiment_interfaces:srv/TurtleControl.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__FUNCTIONS_H_
#define EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "experiment_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "experiment_interfaces/srv/detail/turtle_control__struct.h"

/// Initialize srv/TurtleControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * experiment_interfaces__srv__TurtleControl_Request
 * )) before or use
 * experiment_interfaces__srv__TurtleControl_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__srv__TurtleControl_Request__init(experiment_interfaces__srv__TurtleControl_Request * msg);

/// Finalize srv/TurtleControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__srv__TurtleControl_Request__fini(experiment_interfaces__srv__TurtleControl_Request * msg);

/// Create srv/TurtleControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * experiment_interfaces__srv__TurtleControl_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
experiment_interfaces__srv__TurtleControl_Request *
experiment_interfaces__srv__TurtleControl_Request__create();

/// Destroy srv/TurtleControl message.
/**
 * It calls
 * experiment_interfaces__srv__TurtleControl_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__srv__TurtleControl_Request__destroy(experiment_interfaces__srv__TurtleControl_Request * msg);

/// Check for srv/TurtleControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__srv__TurtleControl_Request__are_equal(const experiment_interfaces__srv__TurtleControl_Request * lhs, const experiment_interfaces__srv__TurtleControl_Request * rhs);

/// Copy a srv/TurtleControl message.
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
experiment_interfaces__srv__TurtleControl_Request__copy(
  const experiment_interfaces__srv__TurtleControl_Request * input,
  experiment_interfaces__srv__TurtleControl_Request * output);

/// Initialize array of srv/TurtleControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * experiment_interfaces__srv__TurtleControl_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__srv__TurtleControl_Request__Sequence__init(experiment_interfaces__srv__TurtleControl_Request__Sequence * array, size_t size);

/// Finalize array of srv/TurtleControl messages.
/**
 * It calls
 * experiment_interfaces__srv__TurtleControl_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__srv__TurtleControl_Request__Sequence__fini(experiment_interfaces__srv__TurtleControl_Request__Sequence * array);

/// Create array of srv/TurtleControl messages.
/**
 * It allocates the memory for the array and calls
 * experiment_interfaces__srv__TurtleControl_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
experiment_interfaces__srv__TurtleControl_Request__Sequence *
experiment_interfaces__srv__TurtleControl_Request__Sequence__create(size_t size);

/// Destroy array of srv/TurtleControl messages.
/**
 * It calls
 * experiment_interfaces__srv__TurtleControl_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__srv__TurtleControl_Request__Sequence__destroy(experiment_interfaces__srv__TurtleControl_Request__Sequence * array);

/// Check for srv/TurtleControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__srv__TurtleControl_Request__Sequence__are_equal(const experiment_interfaces__srv__TurtleControl_Request__Sequence * lhs, const experiment_interfaces__srv__TurtleControl_Request__Sequence * rhs);

/// Copy an array of srv/TurtleControl messages.
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
experiment_interfaces__srv__TurtleControl_Request__Sequence__copy(
  const experiment_interfaces__srv__TurtleControl_Request__Sequence * input,
  experiment_interfaces__srv__TurtleControl_Request__Sequence * output);

/// Initialize srv/TurtleControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * experiment_interfaces__srv__TurtleControl_Response
 * )) before or use
 * experiment_interfaces__srv__TurtleControl_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__srv__TurtleControl_Response__init(experiment_interfaces__srv__TurtleControl_Response * msg);

/// Finalize srv/TurtleControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__srv__TurtleControl_Response__fini(experiment_interfaces__srv__TurtleControl_Response * msg);

/// Create srv/TurtleControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * experiment_interfaces__srv__TurtleControl_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
experiment_interfaces__srv__TurtleControl_Response *
experiment_interfaces__srv__TurtleControl_Response__create();

/// Destroy srv/TurtleControl message.
/**
 * It calls
 * experiment_interfaces__srv__TurtleControl_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__srv__TurtleControl_Response__destroy(experiment_interfaces__srv__TurtleControl_Response * msg);

/// Check for srv/TurtleControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__srv__TurtleControl_Response__are_equal(const experiment_interfaces__srv__TurtleControl_Response * lhs, const experiment_interfaces__srv__TurtleControl_Response * rhs);

/// Copy a srv/TurtleControl message.
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
experiment_interfaces__srv__TurtleControl_Response__copy(
  const experiment_interfaces__srv__TurtleControl_Response * input,
  experiment_interfaces__srv__TurtleControl_Response * output);

/// Initialize array of srv/TurtleControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * experiment_interfaces__srv__TurtleControl_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__srv__TurtleControl_Response__Sequence__init(experiment_interfaces__srv__TurtleControl_Response__Sequence * array, size_t size);

/// Finalize array of srv/TurtleControl messages.
/**
 * It calls
 * experiment_interfaces__srv__TurtleControl_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__srv__TurtleControl_Response__Sequence__fini(experiment_interfaces__srv__TurtleControl_Response__Sequence * array);

/// Create array of srv/TurtleControl messages.
/**
 * It allocates the memory for the array and calls
 * experiment_interfaces__srv__TurtleControl_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
experiment_interfaces__srv__TurtleControl_Response__Sequence *
experiment_interfaces__srv__TurtleControl_Response__Sequence__create(size_t size);

/// Destroy array of srv/TurtleControl messages.
/**
 * It calls
 * experiment_interfaces__srv__TurtleControl_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
void
experiment_interfaces__srv__TurtleControl_Response__Sequence__destroy(experiment_interfaces__srv__TurtleControl_Response__Sequence * array);

/// Check for srv/TurtleControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_experiment_interfaces
bool
experiment_interfaces__srv__TurtleControl_Response__Sequence__are_equal(const experiment_interfaces__srv__TurtleControl_Response__Sequence * lhs, const experiment_interfaces__srv__TurtleControl_Response__Sequence * rhs);

/// Copy an array of srv/TurtleControl messages.
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
experiment_interfaces__srv__TurtleControl_Response__Sequence__copy(
  const experiment_interfaces__srv__TurtleControl_Response__Sequence * input,
  experiment_interfaces__srv__TurtleControl_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__FUNCTIONS_H_
