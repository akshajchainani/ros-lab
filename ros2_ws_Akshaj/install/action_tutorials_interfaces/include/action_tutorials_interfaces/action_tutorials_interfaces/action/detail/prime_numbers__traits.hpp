// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_tutorials_interfaces:action/PrimeNumbers.idl
// generated code does not contain a copyright notice

#ifndef ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__PRIME_NUMBERS__TRAITS_HPP_
#define ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__PRIME_NUMBERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "action_tutorials_interfaces/action/detail/prime_numbers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PrimeNumbers_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: n
  {
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimeNumbers_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimeNumbers_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::PrimeNumbers_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::PrimeNumbers_Goal & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::PrimeNumbers_Goal>()
{
  return "action_tutorials_interfaces::action::PrimeNumbers_Goal";
}

template<>
inline const char * name<action_tutorials_interfaces::action::PrimeNumbers_Goal>()
{
  return "action_tutorials_interfaces/action/PrimeNumbers_Goal";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_tutorials_interfaces::action::PrimeNumbers_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PrimeNumbers_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: primes
  {
    if (msg.primes.size() == 0) {
      out << "primes: []";
    } else {
      out << "primes: [";
      size_t pending_items = msg.primes.size();
      for (auto item : msg.primes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimeNumbers_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: primes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.primes.size() == 0) {
      out << "primes: []\n";
    } else {
      out << "primes:\n";
      for (auto item : msg.primes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimeNumbers_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::PrimeNumbers_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::PrimeNumbers_Result & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::PrimeNumbers_Result>()
{
  return "action_tutorials_interfaces::action::PrimeNumbers_Result";
}

template<>
inline const char * name<action_tutorials_interfaces::action::PrimeNumbers_Result>()
{
  return "action_tutorials_interfaces/action/PrimeNumbers_Result";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_tutorials_interfaces::action::PrimeNumbers_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PrimeNumbers_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: partial_result
  {
    if (msg.partial_result.size() == 0) {
      out << "partial_result: []";
    } else {
      out << "partial_result: [";
      size_t pending_items = msg.partial_result.size();
      for (auto item : msg.partial_result) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimeNumbers_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: partial_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.partial_result.size() == 0) {
      out << "partial_result: []\n";
    } else {
      out << "partial_result:\n";
      for (auto item : msg.partial_result) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimeNumbers_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::PrimeNumbers_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::PrimeNumbers_Feedback & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::PrimeNumbers_Feedback>()
{
  return "action_tutorials_interfaces::action::PrimeNumbers_Feedback";
}

template<>
inline const char * name<action_tutorials_interfaces::action::PrimeNumbers_Feedback>()
{
  return "action_tutorials_interfaces/action/PrimeNumbers_Feedback";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_tutorials_interfaces::action::PrimeNumbers_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "action_tutorials_interfaces/action/detail/prime_numbers__traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PrimeNumbers_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimeNumbers_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimeNumbers_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request>()
{
  return "action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request";
}

template<>
inline const char * name<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request>()
{
  return "action_tutorials_interfaces/action/PrimeNumbers_SendGoal_Request";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PrimeNumbers_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimeNumbers_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimeNumbers_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response>()
{
  return "action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response";
}

template<>
inline const char * name<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response>()
{
  return "action_tutorials_interfaces/action/PrimeNumbers_SendGoal_Response";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::PrimeNumbers_SendGoal>()
{
  return "action_tutorials_interfaces::action::PrimeNumbers_SendGoal";
}

template<>
inline const char * name<action_tutorials_interfaces::action::PrimeNumbers_SendGoal>()
{
  return "action_tutorials_interfaces/action/PrimeNumbers_SendGoal";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request>::value &&
    has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request>::value &&
    has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<action_tutorials_interfaces::action::PrimeNumbers_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_tutorials_interfaces::action::PrimeNumbers_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PrimeNumbers_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimeNumbers_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimeNumbers_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request>()
{
  return "action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request";
}

template<>
inline const char * name<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request>()
{
  return "action_tutorials_interfaces/action/PrimeNumbers_GetResult_Request";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "action_tutorials_interfaces/action/detail/prime_numbers__traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PrimeNumbers_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimeNumbers_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimeNumbers_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response>()
{
  return "action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response";
}

template<>
inline const char * name<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response>()
{
  return "action_tutorials_interfaces/action/PrimeNumbers_GetResult_Response";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_Result>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_Result>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::PrimeNumbers_GetResult>()
{
  return "action_tutorials_interfaces::action::PrimeNumbers_GetResult";
}

template<>
inline const char * name<action_tutorials_interfaces::action::PrimeNumbers_GetResult>()
{
  return "action_tutorials_interfaces/action/PrimeNumbers_GetResult";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request>::value &&
    has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request>::value &&
    has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response>::value
  >
{
};

template<>
struct is_service<action_tutorials_interfaces::action::PrimeNumbers_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_tutorials_interfaces::action::PrimeNumbers_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "action_tutorials_interfaces/action/detail/prime_numbers__traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PrimeNumbers_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrimeNumbers_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrimeNumbers_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::PrimeNumbers_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::PrimeNumbers_FeedbackMessage & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::PrimeNumbers_FeedbackMessage>()
{
  return "action_tutorials_interfaces::action::PrimeNumbers_FeedbackMessage";
}

template<>
inline const char * name<action_tutorials_interfaces::action::PrimeNumbers_FeedbackMessage>()
{
  return "action_tutorials_interfaces/action/PrimeNumbers_FeedbackMessage";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<action_tutorials_interfaces::action::PrimeNumbers_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<action_tutorials_interfaces::action::PrimeNumbers_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::PrimeNumbers_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<action_tutorials_interfaces::action::PrimeNumbers>
  : std::true_type
{
};

template<>
struct is_action_goal<action_tutorials_interfaces::action::PrimeNumbers_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<action_tutorials_interfaces::action::PrimeNumbers_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<action_tutorials_interfaces::action::PrimeNumbers_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__PRIME_NUMBERS__TRAITS_HPP_
