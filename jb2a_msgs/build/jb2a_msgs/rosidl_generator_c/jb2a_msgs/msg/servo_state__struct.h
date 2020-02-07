// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jb2a_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

#ifndef JB2A_MSGS__MSG__SERVO_STATE__STRUCT_H_
#define JB2A_MSGS__MSG__SERVO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'servo_state'
#include "rosidl_generator_c/primitives_sequence.h"

// constants for array fields with an upper bound
// servo_state
enum
{
  jb2a_msgs__msg__ServoState__servo_state__MAX_SIZE = 6
};

// Struct defined in msg/ServoState in the package jb2a_msgs.
typedef struct jb2a_msgs__msg__ServoState
{
  rosidl_generator_c__uint16__Sequence servo_state;
} jb2a_msgs__msg__ServoState;

// Struct for a sequence of jb2a_msgs__msg__ServoState.
typedef struct jb2a_msgs__msg__ServoState__Sequence
{
  jb2a_msgs__msg__ServoState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jb2a_msgs__msg__ServoState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JB2A_MSGS__MSG__SERVO_STATE__STRUCT_H_
