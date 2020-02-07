// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jb2a_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice
#include "jb2a_msgs/msg/servo_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `servo_state`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
jb2a_msgs__msg__ServoState__init(jb2a_msgs__msg__ServoState * msg)
{
  if (!msg) {
    return false;
  }
  // servo_state
  if (!rosidl_generator_c__uint16__Sequence__init(&msg->servo_state, 0)) {
    jb2a_msgs__msg__ServoState__destroy(msg);
    return false;
  }
  return true;
}

void
jb2a_msgs__msg__ServoState__fini(jb2a_msgs__msg__ServoState * msg)
{
  if (!msg) {
    return;
  }
  // servo_state
  rosidl_generator_c__uint16__Sequence__fini(&msg->servo_state);
}

jb2a_msgs__msg__ServoState *
jb2a_msgs__msg__ServoState__create()
{
  jb2a_msgs__msg__ServoState * msg = (jb2a_msgs__msg__ServoState *)malloc(sizeof(jb2a_msgs__msg__ServoState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jb2a_msgs__msg__ServoState));
  bool success = jb2a_msgs__msg__ServoState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
jb2a_msgs__msg__ServoState__destroy(jb2a_msgs__msg__ServoState * msg)
{
  if (msg) {
    jb2a_msgs__msg__ServoState__fini(msg);
  }
  free(msg);
}


bool
jb2a_msgs__msg__ServoState__Sequence__init(jb2a_msgs__msg__ServoState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  jb2a_msgs__msg__ServoState * data = NULL;
  if (size) {
    data = (jb2a_msgs__msg__ServoState *)calloc(size, sizeof(jb2a_msgs__msg__ServoState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jb2a_msgs__msg__ServoState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jb2a_msgs__msg__ServoState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
jb2a_msgs__msg__ServoState__Sequence__fini(jb2a_msgs__msg__ServoState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      jb2a_msgs__msg__ServoState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

jb2a_msgs__msg__ServoState__Sequence *
jb2a_msgs__msg__ServoState__Sequence__create(size_t size)
{
  jb2a_msgs__msg__ServoState__Sequence * array = (jb2a_msgs__msg__ServoState__Sequence *)malloc(sizeof(jb2a_msgs__msg__ServoState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = jb2a_msgs__msg__ServoState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
jb2a_msgs__msg__ServoState__Sequence__destroy(jb2a_msgs__msg__ServoState__Sequence * array)
{
  if (array) {
    jb2a_msgs__msg__ServoState__Sequence__fini(array);
  }
  free(array);
}
