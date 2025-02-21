// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from experiment_interfaces:msg/Birthday.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "experiment_interfaces/msg/detail/birthday__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace experiment_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Birthday_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) experiment_interfaces::msg::Birthday(_init);
}

void Birthday_fini_function(void * message_memory)
{
  auto typed_message = static_cast<experiment_interfaces::msg::Birthday *>(message_memory);
  typed_message->~Birthday();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Birthday_message_member_array[3] = {
  {
    "year",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(experiment_interfaces::msg::Birthday, year),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "month",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(experiment_interfaces::msg::Birthday, month),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "day",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(experiment_interfaces::msg::Birthday, day),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Birthday_message_members = {
  "experiment_interfaces::msg",  // message namespace
  "Birthday",  // message name
  3,  // number of fields
  sizeof(experiment_interfaces::msg::Birthday),
  Birthday_message_member_array,  // message members
  Birthday_init_function,  // function to initialize message memory (memory has to be allocated)
  Birthday_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Birthday_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Birthday_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace experiment_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<experiment_interfaces::msg::Birthday>()
{
  return &::experiment_interfaces::msg::rosidl_typesupport_introspection_cpp::Birthday_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, experiment_interfaces, msg, Birthday)() {
  return &::experiment_interfaces::msg::rosidl_typesupport_introspection_cpp::Birthday_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
