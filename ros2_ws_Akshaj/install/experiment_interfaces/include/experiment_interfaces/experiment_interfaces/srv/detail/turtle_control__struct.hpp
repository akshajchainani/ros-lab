// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from experiment_interfaces:srv/TurtleControl.idl
// generated code does not contain a copyright notice

#ifndef EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__STRUCT_HPP_
#define EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__experiment_interfaces__srv__TurtleControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__experiment_interfaces__srv__TurtleControl_Request __declspec(deprecated)
#endif

namespace experiment_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleControl_Request_
{
  using Type = TurtleControl_Request_<ContainerAllocator>;

  explicit TurtleControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
      this->angle = 0.0f;
    }
  }

  explicit TurtleControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__experiment_interfaces__srv__TurtleControl_Request
    std::shared_ptr<experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__experiment_interfaces__srv__TurtleControl_Request
    std::shared_ptr<experiment_interfaces::srv::TurtleControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleControl_Request_ & other) const
  {
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleControl_Request_

// alias to use template instance with default allocator
using TurtleControl_Request =
  experiment_interfaces::srv::TurtleControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace experiment_interfaces


#ifndef _WIN32
# define DEPRECATED__experiment_interfaces__srv__TurtleControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__experiment_interfaces__srv__TurtleControl_Response __declspec(deprecated)
#endif

namespace experiment_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleControl_Response_
{
  using Type = TurtleControl_Response_<ContainerAllocator>;

  explicit TurtleControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
    }
  }

  explicit TurtleControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
    }
  }

  // field types and members
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__experiment_interfaces__srv__TurtleControl_Response
    std::shared_ptr<experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__experiment_interfaces__srv__TurtleControl_Response
    std::shared_ptr<experiment_interfaces::srv::TurtleControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleControl_Response_ & other) const
  {
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleControl_Response_

// alias to use template instance with default allocator
using TurtleControl_Response =
  experiment_interfaces::srv::TurtleControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace experiment_interfaces

namespace experiment_interfaces
{

namespace srv
{

struct TurtleControl
{
  using Request = experiment_interfaces::srv::TurtleControl_Request;
  using Response = experiment_interfaces::srv::TurtleControl_Response;
};

}  // namespace srv

}  // namespace experiment_interfaces

#endif  // EXPERIMENT_INTERFACES__SRV__DETAIL__TURTLE_CONTROL__STRUCT_HPP_
