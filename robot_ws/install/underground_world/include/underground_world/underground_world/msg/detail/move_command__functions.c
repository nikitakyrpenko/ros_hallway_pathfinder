// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from underground_world:msg/MoveCommand.idl
// generated code does not contain a copyright notice
#include "underground_world/msg/detail/move_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
underground_world__msg__MoveCommand__init(underground_world__msg__MoveCommand * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  return true;
}

void
underground_world__msg__MoveCommand__fini(underground_world__msg__MoveCommand * msg)
{
  if (!msg) {
    return;
  }
  // direction
}

bool
underground_world__msg__MoveCommand__are_equal(const underground_world__msg__MoveCommand * lhs, const underground_world__msg__MoveCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  return true;
}

bool
underground_world__msg__MoveCommand__copy(
  const underground_world__msg__MoveCommand * input,
  underground_world__msg__MoveCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  output->direction = input->direction;
  return true;
}

underground_world__msg__MoveCommand *
underground_world__msg__MoveCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__MoveCommand * msg = (underground_world__msg__MoveCommand *)allocator.allocate(sizeof(underground_world__msg__MoveCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(underground_world__msg__MoveCommand));
  bool success = underground_world__msg__MoveCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
underground_world__msg__MoveCommand__destroy(underground_world__msg__MoveCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    underground_world__msg__MoveCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
underground_world__msg__MoveCommand__Sequence__init(underground_world__msg__MoveCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__MoveCommand * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(underground_world__msg__MoveCommand)) {
      return false;
    }
    data = (underground_world__msg__MoveCommand *)allocator.zero_allocate(size, sizeof(underground_world__msg__MoveCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = underground_world__msg__MoveCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        underground_world__msg__MoveCommand__fini(&data[i - 1]);
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
underground_world__msg__MoveCommand__Sequence__fini(underground_world__msg__MoveCommand__Sequence * array)
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
      underground_world__msg__MoveCommand__fini(&array->data[i]);
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

underground_world__msg__MoveCommand__Sequence *
underground_world__msg__MoveCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__msg__MoveCommand__Sequence * array = (underground_world__msg__MoveCommand__Sequence *)allocator.allocate(sizeof(underground_world__msg__MoveCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = underground_world__msg__MoveCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
underground_world__msg__MoveCommand__Sequence__destroy(underground_world__msg__MoveCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    underground_world__msg__MoveCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
underground_world__msg__MoveCommand__Sequence__are_equal(const underground_world__msg__MoveCommand__Sequence * lhs, const underground_world__msg__MoveCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!underground_world__msg__MoveCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
underground_world__msg__MoveCommand__Sequence__copy(
  const underground_world__msg__MoveCommand__Sequence * input,
  underground_world__msg__MoveCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(underground_world__msg__MoveCommand)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(underground_world__msg__MoveCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    underground_world__msg__MoveCommand * data =
      (underground_world__msg__MoveCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!underground_world__msg__MoveCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          underground_world__msg__MoveCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!underground_world__msg__MoveCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
