// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from jb2a_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef JB2A_MSGS__MSG__JOINT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define JB2A_MSGS__MSG__JOINT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "jb2a_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "jb2a_msgs/msg/joint_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace jb2a_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jb2a_msgs
cdr_serialize(
  const jb2a_msgs::msg::JointState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jb2a_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jb2a_msgs::msg::JointState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jb2a_msgs
get_serialized_size(
  const jb2a_msgs::msg::JointState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jb2a_msgs
max_serialized_size_JointState(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace jb2a_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jb2a_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jb2a_msgs, msg, JointState)();

#ifdef __cplusplus
}
#endif

#endif  // JB2A_MSGS__MSG__JOINT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
