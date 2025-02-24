// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from experiment_interfaces:msg/Birthday.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "experiment_interfaces/msg/detail/birthday__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace experiment_interfaces
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Birthday_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Birthday_type_support_ids_t;

static const _Birthday_type_support_ids_t _Birthday_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Birthday_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Birthday_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Birthday_type_support_symbol_names_t _Birthday_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, experiment_interfaces, msg, Birthday)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, experiment_interfaces, msg, Birthday)),
  }
};

typedef struct _Birthday_type_support_data_t
{
  void * data[2];
} _Birthday_type_support_data_t;

static _Birthday_type_support_data_t _Birthday_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Birthday_message_typesupport_map = {
  2,
  "experiment_interfaces",
  &_Birthday_message_typesupport_ids.typesupport_identifier[0],
  &_Birthday_message_typesupport_symbol_names.symbol_name[0],
  &_Birthday_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Birthday_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Birthday_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace experiment_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<experiment_interfaces::msg::Birthday>()
{
  return &::experiment_interfaces::msg::rosidl_typesupport_cpp::Birthday_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, experiment_interfaces, msg, Birthday)() {
  return get_message_type_support_handle<experiment_interfaces::msg::Birthday>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
