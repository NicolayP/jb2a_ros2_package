// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jb2a_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

#ifndef JB2A_MSGS__MSG__SERVO_STATE__TRAITS_HPP_
#define JB2A_MSGS__MSG__SERVO_STATE__TRAITS_HPP_

#include "jb2a_msgs/msg/servo_state__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jb2a_msgs::msg::ServoState>()
{
  return "jb2a_msgs::msg::ServoState";
}

template<>
struct has_fixed_size<jb2a_msgs::msg::ServoState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jb2a_msgs::msg::ServoState>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // JB2A_MSGS__MSG__SERVO_STATE__TRAITS_HPP_
