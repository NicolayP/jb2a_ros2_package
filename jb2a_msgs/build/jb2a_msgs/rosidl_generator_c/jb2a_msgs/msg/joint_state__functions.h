// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jb2a_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef JB2A_MSGS__MSG__JOINT_STATE__FUNCTIONS_H_
#define JB2A_MSGS__MSG__JOINT_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "jb2a_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "jb2a_msgs/msg/joint_state__struct.h"

/// Initialize msg/JointState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * jb2a_msgs__msg__JointState
 * )) before or use
 * jb2a_msgs__msg__JointState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_jb2a_msgs
bool
jb2a_msgs__msg__JointState__init(jb2a_msgs__msg__JointState * msg);

/// Finalize msg/JointState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jb2a_msgs
void
jb2a_msgs__msg__JointState__fini(jb2a_msgs__msg__JointState * msg);

/// Create msg/JointState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * jb2a_msgs__msg__JointState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jb2a_msgs
jb2a_msgs__msg__JointState *
jb2a_msgs__msg__JointState__create();

/// Destroy msg/JointState message.
/**
 * It calls
 * jb2a_msgs__msg__JointState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jb2a_msgs
void
jb2a_msgs__msg__JointState__destroy(jb2a_msgs__msg__JointState * msg);


/// Initialize array of msg/JointState messages.
/**
 * It allocates the memory for the number of elements and calls
 * jb2a_msgs__msg__JointState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_jb2a_msgs
bool
jb2a_msgs__msg__JointState__Sequence__init(jb2a_msgs__msg__JointState__Sequence * array, size_t size);

/// Finalize array of msg/JointState messages.
/**
 * It calls
 * jb2a_msgs__msg__JointState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jb2a_msgs
void
jb2a_msgs__msg__JointState__Sequence__fini(jb2a_msgs__msg__JointState__Sequence * array);

/// Create array of msg/JointState messages.
/**
 * It allocates the memory for the array and calls
 * jb2a_msgs__msg__JointState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jb2a_msgs
jb2a_msgs__msg__JointState__Sequence *
jb2a_msgs__msg__JointState__Sequence__create(size_t size);

/// Destroy array of msg/JointState messages.
/**
 * It calls
 * jb2a_msgs__msg__JointState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jb2a_msgs
void
jb2a_msgs__msg__JointState__Sequence__destroy(jb2a_msgs__msg__JointState__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // JB2A_MSGS__MSG__JOINT_STATE__FUNCTIONS_H_