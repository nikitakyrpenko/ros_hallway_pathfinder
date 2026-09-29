// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from underground_world:msg/RobotMetrics.idl
// generated code does not contain a copyright notice
#include "underground_world/msg/detail/robot_metrics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `scenario_name`
#include "rosidl_runtime_c/string_functions.h"

bool
underground_world__msg__RobotMetrics__init(underground_world__msg__RobotMetrics * msg)
{
  if (!msg) {
    return false;
  }
  // scenario_name
  if (!rosidl_runtime_c__String__init(&msg->scenario_name)) {
    underground_world__msg__RobotMetrics__fini(msg);
    return false;
  }
  // steps_taken
  // invalid_moves
  // contacts_seen
  // contacts_down
  // invalid_triggers
  // duplicate_triggers
  // unique_cells_seen
  // map_coverage_percent
  return true;
}

void
underground_world__msg__RobotMetrics__fini(underground_world__msg__RobotMetrics * msg)
{
  if (!msg) {
    return;
  }
  // scenario_name
  rosidl_runtime_c__String__fini(&msg->scenario_name);
  // steps_taken
  // invalid_moves
  // contacts_seen
  // contacts_down
  // invalid_triggers
  // duplicate_triggers
  // unique_cells_seen
  // map_coverage_percent
}

bool
underground_world__msg__RobotMetrics__are_equal(const underground_world__msg__RobotMetrics * lhs, const underground_world__msg__RobotMetrics * rhs)
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
  // steps_taken
  if (lhs->steps_taken != rhs->steps_taken) {
    return false;
  }
  // invalid_moves
  if (lhs->invalid_moves != rhs->invalid_moves) {
    return false;
  }
  // contacts_seen
  if (lhs->contacts_seen != rhs->contacts_seen) {
    return false;
  }
  // contacts_down
  if (lhs->contacts_down != rhs->contacts_down) {
    return false;
  }
  // invalid_triggers
  if (lhs->invalid_triggers != rhs->invalid_triggers) {
    return false;
  }
  // duplicate_triggers
  if (lhs->duplicate_triggers != rhs->duplicate_triggers) {
    return false;
  }
  // unique_cells_seen
  if (lhs->unique_cells_seen != rhs->unique_cells_seen) {
    return false;
  }
  // map_coverage_percent
  if (lhs->map_coverage_percent != rhs->map_coverage_percent) {
    return false;
  }
  return true;
}

bool
underground_world__msg__RobotMetrics__copy(
  const underground_world__msg__RobotMetrics * input,
  underground_world__msg__RobotMetrics * output)
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
  // steps_taken
  output->steps_taken = input->steps_taken;
  // invalid_moves
  output->invalid_moves = input->invalid_moves;
  // contacts_seen
  output->contacts_seen = input->contacts_seen;
  // contacts_down
  output->contacts_down = input->contacts_down;
  // invalid_triggers
  output->invalid_triggers = input->invalid_triggers;
  // duplicate_triggers
  output->duplicate_triggers = input->duplicate_triggers;
  // unique_cells_seen
  output->unique_cells_seen = input->unique_cells_seen;
  // map_coverage_percent
  output->map_coverage_percent = input->map_coverage_percent;
  return true;
}

underground_world__msg__RobotMetrics *
underground_world__msg__RobotMetrics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__RobotMetrics * msg = (underground_world__msg__RobotMetrics *)allocator.allocate(sizeof(underground_world__msg__RobotMetrics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(underground_world__msg__RobotMetrics));
  bool success = underground_world__msg__RobotMetrics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
underground_world__msg__RobotMetrics__destroy(underground_world__msg__RobotMetrics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    underground_world__msg__RobotMetrics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
underground_world__msg__RobotMetrics__Sequence__init(underground_world__msg__RobotMetrics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__RobotMetrics * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(underground_world__msg__RobotMetrics)) {
      return false;
    }
    data = (underground_world__msg__RobotMetrics *)allocator.zero_allocate(size, sizeof(underground_world__msg__RobotMetrics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = underground_world__msg__RobotMetrics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        underground_world__msg__RobotMetrics__fini(&data[i - 1]);
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
underground_world__msg__RobotMetrics__Sequence__fini(underground_world__msg__RobotMetrics__Sequence * array)
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
      underground_world__msg__RobotMetrics__fini(&array->data[i]);
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

underground_world__msg__RobotMetrics__Sequence *
underground_world__msg__RobotMetrics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__RobotMetrics__Sequence * array = (underground_world__msg__RobotMetrics__Sequence *)allocator.allocate(sizeof(underground_world__msg__RobotMetrics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = underground_world__msg__RobotMetrics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
underground_world__msg__RobotMetrics__Sequence__destroy(underground_world__msg__RobotMetrics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    underground_world__msg__RobotMetrics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
underground_world__msg__RobotMetrics__Sequence__are_equal(const underground_world__msg__RobotMetrics__Sequence * lhs, const underground_world__msg__RobotMetrics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!underground_world__msg__RobotMetrics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
underground_world__msg__RobotMetrics__Sequence__copy(
  const underground_world__msg__RobotMetrics__Sequence * input,
  underground_world__msg__RobotMetrics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(underground_world__msg__RobotMetrics)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(underground_world__msg__RobotMetrics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    underground_world__msg__RobotMetrics * data =
      (underground_world__msg__RobotMetrics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!underground_world__msg__RobotMetrics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          underground_world__msg__RobotMetrics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!underground_world__msg__RobotMetrics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
