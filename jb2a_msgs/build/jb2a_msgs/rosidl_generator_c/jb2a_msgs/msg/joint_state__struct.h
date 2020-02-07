// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jb2a_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef JB2A_MSGS__MSG__JOINT_STATE__STRUCT_H_
#define JB2A_MSGS__MSG__JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint'
#include "rosidl_generator_c/primitives_sequence.h"

// constants for array fields with an upper bound
// joint
enum
{
  jb2a_msgs__msg__JointState__joint__MAX_SIZE = 5
};

// Struct defined in msg/JointState in the package jb2a_msgs.
typedef struct jb2a_msgs__msg__JointState
{
  rosidl_generator_c__uint16__Sequence joint;
} jb2a_msgs__msg__JointState;

// Struct for a sequence of jb2a_msgs__msg__JointState.
typedef struct jb2a_msgs__msg__JointState__Sequence
{
  jb2a_msgs__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jb2a_msgs__msg__JointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JB2A_MSGS__MSG__JOINT_STATE__STRUCT_H_
