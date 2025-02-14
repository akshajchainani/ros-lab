// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from experiment_interfaces:srv/AddThreeints.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__SRV__DETAIL__ADD_THREEINTS__TRAITS_HPP_
#define EXPERIMENT_INTERFACES__SRV__DETAIL__ADD_THREEINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "experiment_interfaces/srv/detail/add_threeints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace experiment_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddThreeints_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddThreeints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddThreeints_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace experiment_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use experiment_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const experiment_interfaces::srv::AddThreeints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  experiment_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use experiment_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const experiment_interfaces::srv::AddThreeints_Request & msg)
{
  return experiment_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<experiment_interfaces::srv::AddThreeints_Request>()
{
  return "experiment_interfaces::srv::AddThreeints_Request";
}

template<>
inline const char * name<experiment_interfaces::srv::AddThreeints_Request>()
{
  return "experiment_interfaces/srv/AddThreeints_Request";
}

template<>
struct has_fixed_size<experiment_interfaces::srv::AddThreeints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<experiment_interfaces::srv::AddThreeints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<experiment_interfaces::srv::AddThreeints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace experiment_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddThreeints_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddThreeints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddThreeints_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace experiment_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use experiment_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const experiment_interfaces::srv::AddThreeints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  experiment_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use experiment_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const experiment_interfaces::srv::AddThreeints_Response & msg)
{
  return experiment_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<experiment_interfaces::srv::AddThreeints_Response>()
{
  return "experiment_interfaces::srv::AddThreeints_Response";
}

template<>
inline const char * name<experiment_interfaces::srv::AddThreeints_Response>()
{
  return "experiment_interfaces/srv/AddThreeints_Response";
}

template<>
struct has_fixed_size<experiment_interfaces::srv::AddThreeints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<experiment_interfaces::srv::AddThreeints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<experiment_interfaces::srv::AddThreeints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<experiment_interfaces::srv::AddThreeints>()
{
  return "experiment_interfaces::srv::AddThreeints";
}

template<>
inline const char * name<experiment_interfaces::srv::AddThreeints>()
{
  return "experiment_interfaces/srv/AddThreeints";
}

template<>
struct has_fixed_size<experiment_interfaces::srv::AddThreeints>
  : std::integral_constant<
    bool,
    has_fixed_size<experiment_interfaces::srv::AddThreeints_Request>::value &&
    has_fixed_size<experiment_interfaces::srv::AddThreeints_Response>::value
  >
{
};

template<>
struct has_bounded_size<experiment_interfaces::srv::AddThreeints>
  : std::integral_constant<
    bool,
    has_bounded_size<experiment_interfaces::srv::AddThreeints_Request>::value &&
    has_bounded_size<experiment_interfaces::srv::AddThreeints_Response>::value
  >
{
};

template<>
struct is_service<experiment_interfaces::srv::AddThreeints>
  : std::true_type
{
};

template<>
struct is_service_request<experiment_interfaces::srv::AddThreeints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<experiment_interfaces::srv::AddThreeints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EXPERIMENT_INTERFACES__SRV__DETAIL__ADD_THREEINTS__TRAITS_HPP_
