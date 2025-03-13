// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from experiment_interfaces:srv/TurtleControl.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__TRAITS_HPP_
#define EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "experiment_interfaces/srv/detail/turtle_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace experiment_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleControl_Request & msg, bool use_flow_style = false)
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
  const experiment_interfaces::srv::TurtleControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  experiment_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use experiment_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const experiment_interfaces::srv::TurtleControl_Request & msg)
{
  return experiment_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<experiment_interfaces::srv::TurtleControl_Request>()
{
  return "experiment_interfaces::srv::TurtleControl_Request";
}

template<>
inline const char * name<experiment_interfaces::srv::TurtleControl_Request>()
{
  return "experiment_interfaces/srv/TurtleControl_Request";
}

template<>
struct has_fixed_size<experiment_interfaces::srv::TurtleControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<experiment_interfaces::srv::TurtleControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<experiment_interfaces::srv::TurtleControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace experiment_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: msg
  {
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleControl_Response & msg, bool use_flow_style = false)
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
  const experiment_interfaces::srv::TurtleControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  experiment_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use experiment_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const experiment_interfaces::srv::TurtleControl_Response & msg)
{
  return experiment_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<experiment_interfaces::srv::TurtleControl_Response>()
{
  return "experiment_interfaces::srv::TurtleControl_Response";
}

template<>
inline const char * name<experiment_interfaces::srv::TurtleControl_Response>()
{
  return "experiment_interfaces/srv/TurtleControl_Response";
}

template<>
struct has_fixed_size<experiment_interfaces::srv::TurtleControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<experiment_interfaces::srv::TurtleControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<experiment_interfaces::srv::TurtleControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<experiment_interfaces::srv::TurtleControl>()
{
  return "experiment_interfaces::srv::TurtleControl";
}

template<>
inline const char * name<experiment_interfaces::srv::TurtleControl>()
{
  return "experiment_interfaces/srv/TurtleControl";
}

template<>
struct has_fixed_size<experiment_interfaces::srv::TurtleControl>
  : std::integral_constant<
    bool,
    has_fixed_size<experiment_interfaces::srv::TurtleControl_Request>::value &&
    has_fixed_size<experiment_interfaces::srv::TurtleControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<experiment_interfaces::srv::TurtleControl>
  : std::integral_constant<
    bool,
    has_bounded_size<experiment_interfaces::srv::TurtleControl_Request>::value &&
    has_bounded_size<experiment_interfaces::srv::TurtleControl_Response>::value
  >
{
};

template<>
struct is_service<experiment_interfaces::srv::TurtleControl>
  : std::true_type
{
};

template<>
struct is_service_request<experiment_interfaces::srv::TurtleControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<experiment_interfaces::srv::TurtleControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__TRAITS_HPP_
