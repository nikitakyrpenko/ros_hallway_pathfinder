// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from underground_world:msg/RobotResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/robot_result.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__STRUCT_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__underground_world__msg__RobotResult __attribute__((deprecated))
#else
# define DEPRECATED__underground_world__msg__RobotResult __declspec(deprecated)
#endif

namespace underground_world
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotResult_
{
  using Type = RobotResult_<ContainerAllocator>;

  explicit RobotResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario_name = "";
      this->mission_result = "";
      this->reason = "";
      this->steps_taken = 0ul;
      this->max_steps = 0ul;
    }
  }

  explicit RobotResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scenario_name(_alloc),
    mission_result(_alloc),
    reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario_name = "";
      this->mission_result = "";
      this->reason = "";
      this->steps_taken = 0ul;
      this->max_steps = 0ul;
    }
  }

  // field types and members
  using _scenario_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _scenario_name_type scenario_name;
  using _mission_result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_result_type mission_result;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;
  using _steps_taken_type =
    uint32_t;
  _steps_taken_type steps_taken;
  using _max_steps_type =
    uint32_t;
  _max_steps_type max_steps;

  // setters for named parameter idiom
  Type & set__scenario_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->scenario_name = _arg;
    return *this;
  }
  Type & set__mission_result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_result = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }
  Type & set__steps_taken(
    const uint32_t & _arg)
  {
    this->steps_taken = _arg;
    return *this;
  }
  Type & set__max_steps(
    const uint32_t & _arg)
  {
    this->max_steps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    underground_world::msg::RobotResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const underground_world::msg::RobotResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<underground_world::msg::RobotResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<underground_world::msg::RobotResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::RobotResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::RobotResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::RobotResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::RobotResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<underground_world::msg::RobotResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<underground_world::msg::RobotResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__underground_world__msg__RobotResult
    std::shared_ptr<underground_world::msg::RobotResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__underground_world__msg__RobotResult
    std::shared_ptr<underground_world::msg::RobotResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotResult_ & other) const
  {
    if (this->scenario_name != other.scenario_name) {
      return false;
    }
    if (this->mission_result != other.mission_result) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    if (this->steps_taken != other.steps_taken) {
      return false;
    }
    if (this->max_steps != other.max_steps) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotResult_

// alias to use template instance with default allocator
using RobotResult =
  underground_world::msg::RobotResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_RESULT__STRUCT_HPP_
