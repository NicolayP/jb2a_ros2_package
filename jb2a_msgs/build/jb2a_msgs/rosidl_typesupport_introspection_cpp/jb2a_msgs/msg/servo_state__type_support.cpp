// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from jb2a_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "jb2a_msgs/msg/servo_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jb2a_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__ServoState__servo_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServoState__servo_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoState__servo_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ServoState__servo_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoState_message_member_array[1] = {
  {
    "servo_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    true,  // is upper bound
    offsetof(jb2a_msgs::msg::ServoState, servo_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoState__servo_state,  // size() function pointer
    get_const_function__ServoState__servo_state,  // get_const(index) function pointer
    get_function__ServoState__servo_state,  // get(index) function pointer
    resize_function__ServoState__servo_state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoState_message_members = {
  "jb2a_msgs::msg",  // message namespace
  "ServoState",  // message name
  1,  // number of fields
  sizeof(jb2a_msgs::msg::ServoState),
  ServoState_message_member_array  // message members
};

static const rosidl_message_type_support_t ServoState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace jb2a_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jb2a_msgs::msg::ServoState>()
{
  return &::jb2a_msgs::msg::rosidl_typesupport_introspection_cpp::ServoState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jb2a_msgs, msg, ServoState)() {
  return &::jb2a_msgs::msg::rosidl_typesupport_introspection_cpp::ServoState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
