// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jb2a_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

#ifndef JB2A_MSGS__MSG__SERVO_STATE__STRUCT_HPP_
#define JB2A_MSGS__MSG__SERVO_STATE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__jb2a_msgs__msg__ServoState __attribute__((deprecated))
#else
# define DEPRECATED__jb2a_msgs__msg__ServoState __declspec(deprecated)
#endif

namespace jb2a_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoState_
{
  using Type = ServoState_<ContainerAllocator>;

  explicit ServoState_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ServoState_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _servo_state_type =
    rosidl_generator_cpp::BoundedVector<uint16_t, 6, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _servo_state_type servo_state;

  // setters for named parameter idiom
  Type & set__servo_state(
    const rosidl_generator_cpp::BoundedVector<uint16_t, 6, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->servo_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jb2a_msgs::msg::ServoState_<ContainerAllocator> *;
  using ConstRawPtr =
    const jb2a_msgs::msg::ServoState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jb2a_msgs::msg::ServoState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jb2a_msgs::msg::ServoState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jb2a_msgs::msg::ServoState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jb2a_msgs::msg::ServoState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jb2a_msgs::msg::ServoState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jb2a_msgs::msg::ServoState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jb2a_msgs::msg::ServoState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jb2a_msgs::msg::ServoState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jb2a_msgs__msg__ServoState
    std::shared_ptr<jb2a_msgs::msg::ServoState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jb2a_msgs__msg__ServoState
    std::shared_ptr<jb2a_msgs::msg::ServoState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoState_ & other) const
  {
    if (this->servo_state != other.servo_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoState_

// alias to use template instance with default allocator
using ServoState =
  jb2a_msgs::msg::ServoState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jb2a_msgs

#endif  // JB2A_MSGS__MSG__SERVO_STATE__STRUCT_HPP_
