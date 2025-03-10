// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from experiment_interfaces:msg/Birthday.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "experiment_interfaces/msg/detail/birthday__rosidl_typesupport_introspection_c.h"
#include "experiment_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "experiment_interfaces/msg/detail/birthday__functions.h"
#include "experiment_interfaces/msg/detail/birthday__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  experiment_interfaces__msg__Birthday__init(message_memory);
}

void experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_fini_function(void * message_memory)
{
  experiment_interfaces__msg__Birthday__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_message_member_array[3] = {
  {
    "year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(experiment_interfaces__msg__Birthday, year),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "month",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(experiment_interfaces__msg__Birthday, month),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(experiment_interfaces__msg__Birthday, day),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_message_members = {
  "experiment_interfaces__msg",  // message namespace
  "Birthday",  // message name
  3,  // number of fields
  sizeof(experiment_interfaces__msg__Birthday),
  experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_message_member_array,  // message members
  experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_init_function,  // function to initialize message memory (memory has to be allocated)
  experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_message_type_support_handle = {
  0,
  &experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_experiment_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, experiment_interfaces, msg, Birthday)() {
  if (!experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_message_type_support_handle.typesupport_identifier) {
    experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &experiment_interfaces__msg__Birthday__rosidl_typesupport_introspection_c__Birthday_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
