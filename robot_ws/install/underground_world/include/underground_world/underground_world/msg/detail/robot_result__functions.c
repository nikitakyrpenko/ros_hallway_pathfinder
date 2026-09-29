// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from underground_world:msg/RobotResult.idl
// generated code does not contain a copyright notice
#include "underground_world/msg/detail/robot_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `scenario_name`
// Member `mission_result`
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
underground_world__msg__RobotResult__init(underground_world__msg__RobotResult * msg)
{
  if (!msg) {
    return false;
  }
  // scenario_name
  if (!rosidl_runtime_c__String__init(&msg->scenario_name)) {
    underground_world__msg__RobotResult__fini(msg);
    return false;
  }
  // mission_result
  if (!rosidl_runtime_c__String__init(&msg->mission_result)) {
    underground_world__msg__RobotResult__fini(msg);
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    underground_world__msg__RobotResult__fini(msg);
    return false;
  }
  // steps_taken
  // max_steps
  return true;
}

void
underground_world__msg__RobotResult__fini(underground_world__msg__RobotResult * msg)
{
  if (!msg) {
    return;
  }
  // scenario_name
  rosidl_runtime_c__String__fini(&msg->scenario_name);
  // mission_result
  rosidl_runtime_c__String__fini(&msg->mission_result);
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
  // steps_taken
  // max_steps
}

bool
underground_world__msg__RobotResult__are_equal(const underground_world__msg__RobotResult * lhs, const underground_world__msg__RobotResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scenario_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->scenario_name), &(rhs->scenario_name)))
  {
    return false;
  }
  // mission_result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_result), &(rhs->mission_result)))
  {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  // steps_taken
  if (lhs->steps_taken != rhs->steps_taken) {
    return false;
  }
  // max_steps
  if (lhs->max_steps != rhs->max_steps) {
    return false;
  }
  return true;
}

bool
underground_world__msg__RobotResult__copy(
  const underground_world__msg__RobotResult * input,
  underground_world__msg__RobotResult * output)
{
  if (!input || !output) {
    return false;
  }
  // scenario_name
  if (!rosidl_runtime_c__String__copy(
      &(input->scenario_name), &(output->scenario_name)))
  {
    return false;
  }
  // mission_result
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_result), &(output->mission_result)))
  {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  // steps_taken
  output->steps_taken = input->steps_taken;
  // max_steps
  output->max_steps = input->max_steps;
  return true;
}

underground_world__msg__RobotResult *
underground_world__msg__RobotResult__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__RobotResult * msg = (underground_world__msg__RobotResult *)allocator.allocate(sizeof(underground_world__msg__RobotResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(underground_world__msg__RobotResult));
  bool success = underground_world__msg__RobotResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
underground_world__msg__RobotResult__destroy(underground_world__msg__RobotResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    underground_world__msg__RobotResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
underground_world__msg__RobotResult__Sequence__init(underground_world__msg__RobotResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__RobotResult * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(underground_world__msg__RobotResult)) {
      return false;
    }
    data = (underground_world__msg__RobotResult *)allocator.zero_allocate(size, sizeof(underground_world__msg__RobotResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = underground_world__msg__RobotResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        underground_world__msg__RobotResult__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
underground_world__msg__RobotResult__Sequence__fini(underground_world__msg__RobotResult__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      underground_world__msg__RobotResult__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

underground_world__msg__RobotResult__Sequence *
underground_world__msg__RobotResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__RobotResult__Sequence * array = (underground_world__msg__RobotResult__Sequence *)allocator.allocate(sizeof(underground_world__msg__RobotResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = underground_world__msg__RobotResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
underground_world__msg__RobotResult__Sequence__destroy(underground_world__msg__RobotResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    underground_world__msg__RobotResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
underground_world__msg__RobotResult__Sequence__are_equal(const underground_world__msg__RobotResult__Sequence * lhs, const underground_world__msg__RobotResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!underground_world__msg__RobotResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
underground_world__msg__RobotResult__Sequence__copy(
  const underground_world__msg__RobotResult__Sequence * input,
  underground_world__msg__RobotResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(underground_world__msg__RobotResult)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(underground_world__msg__RobotResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    underground_world__msg__RobotResult * data =
      (underground_world__msg__RobotResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!underground_world__msg__RobotResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          underground_world__msg__RobotResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!underground_world__msg__RobotResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
