// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from underground_world:msg/LocalScan.idl
// generated code does not contain a copyright notice
#include "underground_world/msg/detail/local_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `scenario_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `cells`
#include "underground_world/msg/detail/cell_observation__functions.h"

bool
underground_world__msg__LocalScan__init(underground_world__msg__LocalScan * msg)
{
  if (!msg) {
    return false;
  }
  // scenario_name
  if (!rosidl_runtime_c__String__init(&msg->scenario_name)) {
    underground_world__msg__LocalScan__fini(msg);
    return false;
  }
  // robot_x
  // robot_y
  // cells
  if (!underground_world__msg__CellObservation__Sequence__init(&msg->cells, 0)) {
    underground_world__msg__LocalScan__fini(msg);
    return false;
  }
  return true;
}

void
underground_world__msg__LocalScan__fini(underground_world__msg__LocalScan * msg)
{
  if (!msg) {
    return;
  }
  // scenario_name
  rosidl_runtime_c__String__fini(&msg->scenario_name);
  // robot_x
  // robot_y
  // cells
  underground_world__msg__CellObservation__Sequence__fini(&msg->cells);
}

bool
underground_world__msg__LocalScan__are_equal(const underground_world__msg__LocalScan * lhs, const underground_world__msg__LocalScan * rhs)
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
  // robot_x
  if (lhs->robot_x != rhs->robot_x) {
    return false;
  }
  // robot_y
  if (lhs->robot_y != rhs->robot_y) {
    return false;
  }
  // cells
  if (!underground_world__msg__CellObservation__Sequence__are_equal(
      &(lhs->cells), &(rhs->cells)))
  {
    return false;
  }
  return true;
}

bool
underground_world__msg__LocalScan__copy(
  const underground_world__msg__LocalScan * input,
  underground_world__msg__LocalScan * output)
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
  // robot_x
  output->robot_x = input->robot_x;
  // robot_y
  output->robot_y = input->robot_y;
  // cells
  if (!underground_world__msg__CellObservation__Sequence__copy(
      &(input->cells), &(output->cells)))
  {
    return false;
  }
  return true;
}

underground_world__msg__LocalScan *
underground_world__msg__LocalScan__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__LocalScan * msg = (underground_world__msg__LocalScan *)allocator.allocate(sizeof(underground_world__msg__LocalScan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(underground_world__msg__LocalScan));
  bool success = underground_world__msg__LocalScan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
underground_world__msg__LocalScan__destroy(underground_world__msg__LocalScan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    underground_world__msg__LocalScan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
underground_world__msg__LocalScan__Sequence__init(underground_world__msg__LocalScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__LocalScan * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(underground_world__msg__LocalScan)) {
      return false;
    }
    data = (underground_world__msg__LocalScan *)allocator.zero_allocate(size, sizeof(underground_world__msg__LocalScan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = underground_world__msg__LocalScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        underground_world__msg__LocalScan__fini(&data[i - 1]);
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
underground_world__msg__LocalScan__Sequence__fini(underground_world__msg__LocalScan__Sequence * array)
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
      underground_world__msg__LocalScan__fini(&array->data[i]);
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

underground_world__msg__LocalScan__Sequence *
underground_world__msg__LocalScan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__LocalScan__Sequence * array = (underground_world__msg__LocalScan__Sequence *)allocator.allocate(sizeof(underground_world__msg__LocalScan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = underground_world__msg__LocalScan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
underground_world__msg__LocalScan__Sequence__destroy(underground_world__msg__LocalScan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    underground_world__msg__LocalScan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
underground_world__msg__LocalScan__Sequence__are_equal(const underground_world__msg__LocalScan__Sequence * lhs, const underground_world__msg__LocalScan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!underground_world__msg__LocalScan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
underground_world__msg__LocalScan__Sequence__copy(
  const underground_world__msg__LocalScan__Sequence * input,
  underground_world__msg__LocalScan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(underground_world__msg__LocalScan)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(underground_world__msg__LocalScan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    underground_world__msg__LocalScan * data =
      (underground_world__msg__LocalScan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!underground_world__msg__LocalScan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          underground_world__msg__LocalScan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!underground_world__msg__LocalScan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
