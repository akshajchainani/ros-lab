// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from experiment_interfaces:msg/Birthday.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__TRAITS_HPP_
#define EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "experiment_interfaces/msg/detail/birthday__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace experiment_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Birthday & msg,
  std::ostream & out)
{
  out << "{";
  // member: year
  {
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << ", ";
  }

  // member: month
  {
    out << "month: ";
    rosidl_generator_traits::value_to_yaml(msg.month, out);
    out << ", ";
  }

  // member: day
  {
    out << "day: ";
    rosidl_generator_traits::value_to_yaml(msg.day, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Birthday & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << "\n";
  }

  // member: month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "month: ";
    rosidl_generator_traits::value_to_yaml(msg.month, out);
    out << "\n";
  }

  // member: day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "day: ";
    rosidl_generator_traits::value_to_yaml(msg.day, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Birthday & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace experiment_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use experiment_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const experiment_interfaces::msg::Birthday & msg,
  std::ostream & out, size_t indentation = 0)
{
  experiment_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use experiment_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const experiment_interfaces::msg::Birthday & msg)
{
  return experiment_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<experiment_interfaces::msg::Birthday>()
{
  return "experiment_interfaces::msg::Birthday";
}

template<>
inline const char * name<experiment_interfaces::msg::Birthday>()
{
  return "experiment_interfaces/msg/Birthday";
}

template<>
struct has_fixed_size<experiment_interfaces::msg::Birthday>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<experiment_interfaces::msg::Birthday>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<experiment_interfaces::msg::Birthday>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__TRAITS_HPP_
