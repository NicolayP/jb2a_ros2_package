// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jb2a_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jb2a_msgs/msg/joint_state__rosidl_typesupport_introspection_c.h"
#include "jb2a_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jb2a_msgs/msg/joint_state__struct.h"


// Include directives for member types
// Member `joint`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember JointState__rosidl_typesupport_introspection_c__JointState_message_member_array[1] = {
  {
    "joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    true,  // is upper bound
    offsetof(jb2a_msgs__msg__JointState, joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointState__rosidl_typesupport_introspection_c__JointState_message_members = {
  "jb2a_msgs__msg",  // message namespace
  "JointState",  // message name
  1,  // number of fields
  sizeof(jb2a_msgs__msg__JointState),
  JointState__rosidl_typesupport_introspection_c__JointState_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle = {
  0,
  &JointState__rosidl_typesupport_introspection_c__JointState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jb2a_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jb2a_msgs, msg, JointState)() {
  if (!JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle.typesupport_identifier) {
    JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
