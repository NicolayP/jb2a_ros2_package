// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jb2a_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jb2a_msgs/msg/servo_state__rosidl_typesupport_introspection_c.h"
#include "jb2a_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jb2a_msgs/msg/servo_state__struct.h"


// Include directives for member types
// Member `servo_state`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ServoState__rosidl_typesupport_introspection_c__ServoState_message_member_array[1] = {
  {
    "servo_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    true,  // is upper bound
    offsetof(jb2a_msgs__msg__ServoState, servo_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServoState__rosidl_typesupport_introspection_c__ServoState_message_members = {
  "jb2a_msgs__msg",  // message namespace
  "ServoState",  // message name
  1,  // number of fields
  sizeof(jb2a_msgs__msg__ServoState),
  ServoState__rosidl_typesupport_introspection_c__ServoState_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle = {
  0,
  &ServoState__rosidl_typesupport_introspection_c__ServoState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jb2a_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jb2a_msgs, msg, ServoState)() {
  if (!ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle.typesupport_identifier) {
    ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServoState__rosidl_typesupport_introspection_c__ServoState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif