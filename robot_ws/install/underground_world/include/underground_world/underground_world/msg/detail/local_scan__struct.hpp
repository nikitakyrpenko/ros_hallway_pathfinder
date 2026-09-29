// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from underground_world:msg/LocalScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "underground_world/msg/local_scan.hpp"


#ifndef UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__STRUCT_HPP_
#define UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cells'
#include "underground_world/msg/detail/cell_observation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__underground_world__msg__LocalScan __attribute__((deprecated))
#else
# define DEPRECATED__underground_world__msg__LocalScan __declspec(deprecated)
#endif

namespace underground_world
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalScan_
{
  using Type = LocalScan_<ContainerAllocator>;

  explicit LocalScan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario_name = "";
      this->robot_x = 0l;
      this->robot_y = 0l;
    }
  }

  explicit LocalScan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scenario_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario_name = "";
      this->robot_x = 0l;
      this->robot_y = 0l;
    }
  }

  // field types and members
  using _scenario_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _scenario_name_type scenario_name;
  using _robot_x_type =
    int32_t;
  _robot_x_type robot_x;
  using _robot_y_type =
    int32_t;
  _robot_y_type robot_y;
  using _cells_type =
    std::vector<underground_world::msg::CellObservation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<underground_world::msg::CellObservation_<ContainerAllocator>>>;
  _cells_type cells;

  // setters for named parameter idiom
  Type & set__scenario_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->scenario_name = _arg;
    return *this;
  }
  Type & set__robot_x(
    const int32_t & _arg)
  {
    this->robot_x = _arg;
    return *this;
  }
  Type & set__robot_y(
    const int32_t & _arg)
  {
    this->robot_y = _arg;
    return *this;
  }
  Type & set__cells(
    const std::vector<underground_world::msg::CellObservation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<underground_world::msg::CellObservation_<ContainerAllocator>>> & _arg)
  {
    this->cells = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    underground_world::msg::LocalScan_<ContainerAllocator> *;
  using ConstRawPtr =
    const underground_world::msg::LocalScan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<underground_world::msg::LocalScan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<underground_world::msg::LocalScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::LocalScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::LocalScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      underground_world::msg::LocalScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<underground_world::msg::LocalScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<underground_world::msg::LocalScan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<underground_world::msg::LocalScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__underground_world__msg__LocalScan
    std::shared_ptr<underground_world::msg::LocalScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__underground_world__msg__LocalScan
    std::shared_ptr<underground_world::msg::LocalScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalScan_ & other) const
  {
    if (this->scenario_name != other.scenario_name) {
      return false;
    }
    if (this->robot_x != other.robot_x) {
      return false;
    }
    if (this->robot_y != other.robot_y) {
      return false;
    }
    if (this->cells != other.cells) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalScan_

// alias to use template instance with default allocator
using LocalScan =
  underground_world::msg::LocalScan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace underground_world

#endif  // UNDERGROUND_WORLD__MSG__DETAIL__LOCAL_SCAN__STRUCT_HPP_
