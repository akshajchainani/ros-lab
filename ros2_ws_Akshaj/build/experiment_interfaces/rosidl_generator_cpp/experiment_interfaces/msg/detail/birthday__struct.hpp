// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from experiment_interfaces:msg/Birthday.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__STRUCT_HPP_
#define EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__experiment_interfaces__msg__Birthday __attribute__((deprecated))
#else
# define DEPRECATED__experiment_interfaces__msg__Birthday __declspec(deprecated)
#endif

namespace experiment_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Birthday_
{
  using Type = Birthday_<ContainerAllocator>;

  explicit Birthday_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0l;
      this->month = 0l;
      this->day = 0l;
    }
  }

  explicit Birthday_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0l;
      this->month = 0l;
      this->day = 0l;
    }
  }

  // field types and members
  using _year_type =
    int32_t;
  _year_type year;
  using _month_type =
    int32_t;
  _month_type month;
  using _day_type =
    int32_t;
  _day_type day;

  // setters for named parameter idiom
  Type & set__year(
    const int32_t & _arg)
  {
    this->year = _arg;
    return *this;
  }
  Type & set__month(
    const int32_t & _arg)
  {
    this->month = _arg;
    return *this;
  }
  Type & set__day(
    const int32_t & _arg)
  {
    this->day = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    experiment_interfaces::msg::Birthday_<ContainerAllocator> *;
  using ConstRawPtr =
    const experiment_interfaces::msg::Birthday_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<experiment_interfaces::msg::Birthday_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<experiment_interfaces::msg::Birthday_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      experiment_interfaces::msg::Birthday_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<experiment_interfaces::msg::Birthday_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      experiment_interfaces::msg::Birthday_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<experiment_interfaces::msg::Birthday_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<experiment_interfaces::msg::Birthday_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<experiment_interfaces::msg::Birthday_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__experiment_interfaces__msg__Birthday
    std::shared_ptr<experiment_interfaces::msg::Birthday_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__experiment_interfaces__msg__Birthday
    std::shared_ptr<experiment_interfaces::msg::Birthday_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Birthday_ & other) const
  {
    if (this->year != other.year) {
      return false;
    }
    if (this->month != other.month) {
      return false;
    }
    if (this->day != other.day) {
      return false;
    }
    return true;
  }
  bool operator!=(const Birthday_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Birthday_

// alias to use template instance with default allocator
using Birthday =
  experiment_interfaces::msg::Birthday_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace experiment_interfaces

#endif  // EXPERIMENT_INTERFACES__MSG__DETAIL__BIRTHDAY__STRUCT_HPP_
