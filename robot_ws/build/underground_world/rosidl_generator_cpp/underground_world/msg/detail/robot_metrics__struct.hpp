// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from underground_world:msg/RobotMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/robot_metrics.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__STRUCT_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__underground_world__msg__RobotMetrics __attribute__((deprecated))
#else
# define DEPRECATED__underground_world__msg__RobotMetrics __declspec(deprecated)
#endif

namespace underground_world
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotMetrics_
{
  using Type = RobotMetrics_<ContainerAllocator>;

  explicit RobotMetrics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario_name = "";
      this->steps_taken = 0ul;
      this->invalid_moves = 0ul;
      this->contacts_seen = 0ul;
      this->contacts_down = 0ul;
      this->invalid_triggers = 0ul;
      this->duplicate_triggers = 0ul;
      this->unique_cells_seen = 0ul;
      this->map_coverage_percent = 0.0f;
    }
  }

  explicit RobotMetrics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scenario_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario_name = "";
      this->steps_taken = 0ul;
      this->invalid_moves = 0ul;
      this->contacts_seen = 0ul;
      this->contacts_down = 0ul;
      this->invalid_triggers = 0ul;
      this->duplicate_triggers = 0ul;
      this->unique_cells_seen = 0ul;
      this->map_coverage_percent = 0.0f;
    }
  }

  // field types and members
  using _scenario_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _scenario_name_type scenario_name;
  using _steps_taken_type =
    uint32_t;
  _steps_taken_type steps_taken;
  using _invalid_moves_type =
    uint32_t;
  _invalid_moves_type invalid_moves;
  using _contacts_seen_type =
    uint32_t;
  _contacts_seen_type contacts_seen;
  using _contacts_down_type =
    uint32_t;
  _contacts_down_type contacts_down;
  using _invalid_triggers_type =
    uint32_t;
  _invalid_triggers_type invalid_triggers;
  using _duplicate_triggers_type =
    uint32_t;
  _duplicate_triggers_type duplicate_triggers;
  using _unique_cells_seen_type =
    uint32_t;
  _unique_cells_seen_type unique_cells_seen;
  using _map_coverage_percent_type =
    float;
  _map_coverage_percent_type map_coverage_percent;

  // setters for named parameter idiom
  Type & set__scenario_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->scenario_name = _arg;
    return *this;
  }
  Type & set__steps_taken(
    const uint32_t & _arg)
  {
    this->steps_taken = _arg;
    return *this;
  }
  Type & set__invalid_moves(
    const uint32_t & _arg)
  {
    this->invalid_moves = _arg;
    return *this;
  }
  Type & set__contacts_seen(
    const uint32_t & _arg)
  {
    this->contacts_seen = _arg;
    return *this;
  }
  Type & set__contacts_down(
    const uint32_t & _arg)
  {
    this->contacts_down = _arg;
    return *this;
  }
  Type & set__invalid_triggers(
    const uint32_t & _arg)
  {
    this->invalid_triggers = _arg;
    return *this;
  }
  Type & set__duplicate_triggers(
    const uint32_t & _arg)
  {
    this->duplicate_triggers = _arg;
    return *this;
  }
  Type & set__unique_cells_seen(
    const uint32_t & _arg)
  {
    this->unique_cells_seen = _arg;
    return *this;
  }
  Type & set__map_coverage_percent(
    const float & _arg)
  {
    this->map_coverage_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    underground_world::msg::RobotMetrics_<ContainerAllocator> *;
  using ConstRawPtr =
    const underground_world::msg::RobotMetrics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<underground_world::msg::RobotMetrics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<underground_world::msg::RobotMetrics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::RobotMetrics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::RobotMetrics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::RobotMetrics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::RobotMetrics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<underground_world::msg::RobotMetrics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<underground_world::msg::RobotMetrics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__underground_world__msg__RobotMetrics
    std::shared_ptr<underground_world::msg::RobotMetrics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__underground_world__msg__RobotMetrics
    std::shared_ptr<underground_world::msg::RobotMetrics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMetrics_ & other) const
  {
    if (this->scenario_name != other.scenario_name) {
      return false;
    }
    if (this->steps_taken != other.steps_taken) {
      return false;
    }
    if (this->invalid_moves != other.invalid_moves) {
      return false;
    }
    if (this->contacts_seen != other.contacts_seen) {
      return false;
    }
    if (this->contacts_down != other.contacts_down) {
      return false;
    }
    if (this->invalid_triggers != other.invalid_triggers) {
      return false;
    }
    if (this->duplicate_triggers != other.duplicate_triggers) {
      return false;
    }
    if (this->unique_cells_seen != other.unique_cells_seen) {
      return false;
    }
    if (this->map_coverage_percent != other.map_coverage_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMetrics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMetrics_

// alias to use template instance with default allocator
using RobotMetrics =
  underground_world::msg::RobotMetrics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__ROBOT_METRICS__STRUCT_HPP_
