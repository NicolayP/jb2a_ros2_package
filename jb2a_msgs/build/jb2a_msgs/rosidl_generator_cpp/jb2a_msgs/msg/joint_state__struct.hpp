// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jb2a_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef JB2A_MSGS__MSG__JOINT_STATE__STRUCT_HPP_
#define JB2A_MSGS__MSG__JOINT_STATE__STRUCT_HPP_

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
# define DEPRECATED__jb2a_msgs__msg__JointState __attribute__((deprecated))
#else
# define DEPRECATED__jb2a_msgs__msg__JointState __declspec(deprecated)
#endif

namespace jb2a_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointState_
{
  using Type = JointState_<ContainerAllocator>;

  explicit JointState_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JointState_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_type =
    rosidl_generator_cpp::BoundedVector<uint16_t, 5, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _joint_type joint;

  // setters for named parameter idiom
  Type & set__joint(
    const rosidl_generator_cpp::BoundedVector<uint16_t, 5, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->joint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jb2a_msgs::msg::JointState_<ContainerAllocator> *;
  using ConstRawPtr =
    const jb2a_msgs::msg::JointState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jb2a_msgs::msg::JointState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jb2a_msgs::msg::JointState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jb2a_msgs::msg::JointState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jb2a_msgs::msg::JointState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jb2a_msgs::msg::JointState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jb2a_msgs::msg::JointState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jb2a_msgs::msg::JointState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jb2a_msgs::msg::JointState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jb2a_msgs__msg__JointState
    std::shared_ptr<jb2a_msgs::msg::JointState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jb2a_msgs__msg__JointState
    std::shared_ptr<jb2a_msgs::msg::JointState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointState_ & other) const
  {
    if (this->joint != other.joint) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointState_

// alias to use template instance with default allocator
using JointState =
  jb2a_msgs::msg::JointState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jb2a_msgs

#endif  // JB2A_MSGS__MSG__JOINT_STATE__STRUCT_HPP_
