// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from experiment_interfaces:srv/TurtleControl.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__BUILDER_HPP_
#define EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "experiment_interfaces/srv/detail/turtle_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace experiment_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleControl_Request_angle
{
public:
  explicit Init_TurtleControl_Request_angle(::experiment_interfaces::srv::TurtleControl_Request & msg)
  : msg_(msg)
  {}
  ::experiment_interfaces::srv::TurtleControl_Request angle(::experiment_interfaces::srv::TurtleControl_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::experiment_interfaces::srv::TurtleControl_Request msg_;
};

class Init_TurtleControl_Request_velocity
{
public:
  Init_TurtleControl_Request_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleControl_Request_angle velocity(::experiment_interfaces::srv::TurtleControl_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TurtleControl_Request_angle(msg_);
  }

private:
  ::experiment_interfaces::srv::TurtleControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::experiment_interfaces::srv::TurtleControl_Request>()
{
  return experiment_interfaces::srv::builder::Init_TurtleControl_Request_velocity();
}

}  // namespace experiment_interfaces


namespace experiment_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleControl_Response_msg
{
public:
  Init_TurtleControl_Response_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::experiment_interfaces::srv::TurtleControl_Response msg(::experiment_interfaces::srv::TurtleControl_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::experiment_interfaces::srv::TurtleControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::experiment_interfaces::srv::TurtleControl_Response>()
{
  return experiment_interfaces::srv::builder::Init_TurtleControl_Response_msg();
}

}  // namespace experiment_interfaces

#endif  // EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__BUILDER_HPP_
