// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from underground_world:msg/CellObservation.idl
// generated code does not contain a copyright notice
#include "underground_world/msg/detail/cell_observation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cell_type`
#include "rosidl_runtime_c/string_functions.h"

bool
underground_world__msg__CellObservation__init(underground_world__msg__CellObservation * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // cell_type
  if (!rosidl_runtime_c__String__init(&msg->cell_type)) {
    underground_world__msg__CellObservation__fini(msg);
    return false;
  }
  // contact_id
  return true;
}

void
underground_world__msg__CellObservation__fini(underground_world__msg__CellObservation * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // cell_type
  rosidl_runtime_c__String__fini(&msg->cell_type);
  // contact_id
}

bool
underground_world__msg__CellObservation__are_equal(const underground_world__msg__CellObservation * lhs, const underground_world__msg__CellObservation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // cell_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cell_type), &(rhs->cell_type)))
  {
    return false;
  }
  // contact_id
  if (lhs->contact_id != rhs->contact_id) {
    return false;
  }
  return true;
}

bool
underground_world__msg__CellObservation__copy(
  const underground_world__msg__CellObservation * input,
  underground_world__msg__CellObservation * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // cell_type
  if (!rosidl_runtime_c__String__copy(
      &(input->cell_type), &(output->cell_type)))
  {
    return false;
  }
  // contact_id
  output->contact_id = input->contact_id;
  return true;
}

underground_world__msg__CellObservation *
underground_world__msg__CellObservation__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__CellObservation * msg = (underground_world__msg__CellObservation *)allocator.allocate(sizeof(underground_world__msg__CellObservation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(underground_world__msg__CellObservation));
  bool success = underground_world__msg__CellObservation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
underground_world__msg__CellObservation__destroy(underground_world__msg__CellObservation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    underground_world__msg__CellObservation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
underground_world__msg__CellObservation__Sequence__init(underground_world__msg__CellObservation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__CellObservation * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(underground_world__msg__CellObservation)) {
      return false;
    }
    data = (underground_world__msg__CellObservation *)allocator.zero_allocate(size, sizeof(underground_world__msg__CellObservation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = underground_world__msg__CellObservation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        underground_world__msg__CellObservation__fini(&data[i - 1]);
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
underground_world__msg__CellObservation__Sequence__fini(underground_world__msg__CellObservation__Sequence * array)
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
      underground_world__msg__CellObservation__fini(&array->data[i]);
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

underground_world__msg__CellObservation__Sequence *
underground_world__msg__CellObservation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__CellObservation__Sequence * array = (underground_world__msg__CellObservation__Sequence *)allocator.allocate(sizeof(underground_world__msg__CellObservation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = underground_world__msg__CellObservation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
underground_world__msg__CellObservation__Sequence__destroy(underground_world__msg__CellObservation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    underground_world__msg__CellObservation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
underground_world__msg__CellObservation__Sequence__are_equal(const underground_world__msg__CellObservation__Sequence * lhs, const underground_world__msg__CellObservation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!underground_world__msg__CellObservation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
underground_world__msg__CellObservation__Sequence__copy(
  const underground_world__msg__CellObservation__Sequence * input,
  underground_world__msg__CellObservation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(underground_world__msg__CellObservation)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(underground_world__msg__CellObservation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    underground_world__msg__CellObservation * data =
      (underground_world__msg__CellObservation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!underground_world__msg__CellObservation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          underground_world__msg__CellObservation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!underground_world__msg__CellObservation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
