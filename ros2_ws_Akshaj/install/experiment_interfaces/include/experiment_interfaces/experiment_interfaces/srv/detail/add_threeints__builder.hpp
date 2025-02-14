// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from experiment_interfaces:srv/AddThreeints.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__SRV__DETAIL__ADD_THREEINTS__BUILDER_HPP_
#define EXPERIMENT_INTERFACES__SRV__DETAIL__ADD_THREEINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "experiment_interfaces/srv/detail/add_threeints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace experiment_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeints_Request_c
{
public:
  explicit Init_AddThreeints_Request_c(::experiment_interfaces::srv::AddThreeints_Request & msg)
  : msg_(msg)
  {}
  ::experiment_interfaces::srv::AddThreeints_Request c(::experiment_interfaces::srv::AddThreeints_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::experiment_interfaces::srv::AddThreeints_Request msg_;
};

class Init_AddThreeints_Request_b
{
public:
  explicit Init_AddThreeints_Request_b(::experiment_interfaces::srv::AddThreeints_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeints_Request_c b(::experiment_interfaces::srv::AddThreeints_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeints_Request_c(msg_);
  }

private:
  ::experiment_interfaces::srv::AddThreeints_Request msg_;
};

class Init_AddThreeints_Request_a
{
public:
  Init_AddThreeints_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeints_Request_b a(::experiment_interfaces::srv::AddThreeints_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeints_Request_b(msg_);
  }

private:
  ::experiment_interfaces::srv::AddThreeints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::experiment_interfaces::srv::AddThreeints_Request>()
{
  return experiment_interfaces::srv::builder::Init_AddThreeints_Request_a();
}

}  // namespace experiment_interfaces


namespace experiment_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeints_Response_sum
{
public:
  Init_AddThreeints_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::experiment_interfaces::srv::AddThreeints_Response sum(::experiment_interfaces::srv::AddThreeints_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::experiment_interfaces::srv::AddThreeints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::experiment_interfaces::srv::AddThreeints_Response>()
{
  return experiment_interfaces::srv::builder::Init_AddThreeints_Response_sum();
}

}  // namespace experiment_interfaces

#endif  // EXPERIMENT_INTERFACES__SRV__DETAIL__ADD_THREEINTS__BUILDER_HPP_
