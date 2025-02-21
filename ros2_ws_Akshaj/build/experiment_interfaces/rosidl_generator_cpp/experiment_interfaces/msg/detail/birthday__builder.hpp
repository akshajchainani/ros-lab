// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from experiment_interfaces:msg/Birthday.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__BUILDER_HPP_
#define EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "experiment_interfaces/msg/detail/birthday__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace experiment_interfaces
{

namespace msg
{

namespace builder
{

class Init_Birthday_day
{
public:
  explicit Init_Birthday_day(::experiment_interfaces::msg::Birthday & msg)
  : msg_(msg)
  {}
  ::experiment_interfaces::msg::Birthday day(::experiment_interfaces::msg::Birthday::_day_type arg)
  {
    msg_.day = std::move(arg);
    return std::move(msg_);
  }

private:
  ::experiment_interfaces::msg::Birthday msg_;
};

class Init_Birthday_month
{
public:
  explicit Init_Birthday_month(::experiment_interfaces::msg::Birthday & msg)
  : msg_(msg)
  {}
  Init_Birthday_day month(::experiment_interfaces::msg::Birthday::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_Birthday_day(msg_);
  }

private:
  ::experiment_interfaces::msg::Birthday msg_;
};

class Init_Birthday_year
{
public:
  Init_Birthday_year()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Birthday_month year(::experiment_interfaces::msg::Birthday::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_Birthday_month(msg_);
  }

private:
  ::experiment_interfaces::msg::Birthday msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::experiment_interfaces::msg::Birthday>()
{
  return experiment_interfaces::msg::builder::Init_Birthday_year();
}

}  // namespace experiment_interfaces

#endif  // EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__BUILDER_HPP_
