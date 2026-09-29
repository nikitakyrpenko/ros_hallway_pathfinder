// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from underground_world:srv/PayloadTrigger.idl
// generated code does not contain a copyright notice
#include "underground_world/srv/detail/payload_trigger__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
underground_world__srv__PayloadTrigger_Request__init(underground_world__srv__PayloadTrigger_Request * msg)
{
  if (!msg) {
    return false;
  }
  // contact_id
  // x
  // y
  return true;
}

void
underground_world__srv__PayloadTrigger_Request__fini(underground_world__srv__PayloadTrigger_Request * msg)
{
  if (!msg) {
    return;
  }
  // contact_id
  // x
  // y
}

bool
underground_world__srv__PayloadTrigger_Request__are_equal(const underground_world__srv__PayloadTrigger_Request * lhs, const underground_world__srv__PayloadTrigger_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // contact_id
  if (lhs->contact_id != rhs->contact_id) {
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
  return true;
}

bool
underground_world__srv__PayloadTrigger_Request__copy(
  const underground_world__srv__PayloadTrigger_Request * input,
  underground_world__srv__PayloadTrigger_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // contact_id
  output->contact_id = input->contact_id;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

underground_world__srv__PayloadTrigger_Request *
underground_world__srv__PayloadTrigger_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__srv__PayloadTrigger_Request * msg = (underground_world__srv__PayloadTrigger_Request *)allocator.allocate(sizeof(underground_world__srv__PayloadTrigger_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(underground_world__srv__PayloadTrigger_Request));
  bool success = underground_world__srv__PayloadTrigger_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
underground_world__srv__PayloadTrigger_Request__destroy(underground_world__srv__PayloadTrigger_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    underground_world__srv__PayloadTrigger_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
underground_world__srv__PayloadTrigger_Request__Sequence__init(underground_world__srv__PayloadTrigger_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__srv__PayloadTrigger_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(underground_world__srv__PayloadTrigger_Request)) {
      return false;
    }
    data = (underground_world__srv__PayloadTrigger_Request *)allocator.zero_allocate(size, sizeof(underground_world__srv__PayloadTrigger_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = underground_world__srv__PayloadTrigger_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        underground_world__srv__PayloadTrigger_Request__fini(&data[i - 1]);
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
underground_world__srv__PayloadTrigger_Request__Sequence__fini(underground_world__srv__PayloadTrigger_Request__Sequence * array)
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
      underground_world__srv__PayloadTrigger_Request__fini(&array->data[i]);
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

underground_world__srv__PayloadTrigger_Request__Sequence *
underground_world__srv__PayloadTrigger_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__srv__PayloadTrigger_Request__Sequence * array = (underground_world__srv__PayloadTrigger_Request__Sequence *)allocator.allocate(sizeof(underground_world__srv__PayloadTrigger_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = underground_world__srv__PayloadTrigger_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
underground_world__srv__PayloadTrigger_Request__Sequence__destroy(underground_world__srv__PayloadTrigger_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    underground_world__srv__PayloadTrigger_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
underground_world__srv__PayloadTrigger_Request__Sequence__are_equal(const underground_world__srv__PayloadTrigger_Request__Sequence * lhs, const underground_world__srv__PayloadTrigger_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!underground_world__srv__PayloadTrigger_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
underground_world__srv__PayloadTrigger_Request__Sequence__copy(
  const underground_world__srv__PayloadTrigger_Request__Sequence * input,
  underground_world__srv__PayloadTrigger_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(underground_world__srv__PayloadTrigger_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(underground_world__srv__PayloadTrigger_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    underground_world__srv__PayloadTrigger_Request * data =
      (underground_world__srv__PayloadTrigger_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!underground_world__srv__PayloadTrigger_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          underground_world__srv__PayloadTrigger_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!underground_world__srv__PayloadTrigger_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
underground_world__srv__PayloadTrigger_Response__init(underground_world__srv__PayloadTrigger_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    underground_world__srv__PayloadTrigger_Response__fini(msg);
    return false;
  }
  return true;
}

void
underground_world__srv__PayloadTrigger_Response__fini(underground_world__srv__PayloadTrigger_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
underground_world__srv__PayloadTrigger_Response__are_equal(const underground_world__srv__PayloadTrigger_Response * lhs, const underground_world__srv__PayloadTrigger_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
underground_world__srv__PayloadTrigger_Response__copy(
  const underground_world__srv__PayloadTrigger_Response * input,
  underground_world__srv__PayloadTrigger_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

underground_world__srv__PayloadTrigger_Response *
underground_world__srv__PayloadTrigger_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__srv__PayloadTrigger_Response * msg = (underground_world__srv__PayloadTrigger_Response *)allocator.allocate(sizeof(underground_world__srv__PayloadTrigger_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(underground_world__srv__PayloadTrigger_Response));
  bool success = underground_world__srv__PayloadTrigger_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
underground_world__srv__PayloadTrigger_Response__destroy(underground_world__srv__PayloadTrigger_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    underground_world__srv__PayloadTrigger_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
underground_world__srv__PayloadTrigger_Response__Sequence__init(underground_world__srv__PayloadTrigger_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__srv__PayloadTrigger_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(underground_world__srv__PayloadTrigger_Response)) {
      return false;
    }
    data = (underground_world__srv__PayloadTrigger_Response *)allocator.zero_allocate(size, sizeof(underground_world__srv__PayloadTrigger_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = underground_world__srv__PayloadTrigger_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        underground_world__srv__PayloadTrigger_Response__fini(&data[i - 1]);
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
underground_world__srv__PayloadTrigger_Response__Sequence__fini(underground_world__srv__PayloadTrigger_Response__Sequence * array)
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
      underground_world__srv__PayloadTrigger_Response__fini(&array->data[i]);
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

underground_world__srv__PayloadTrigger_Response__Sequence *
underground_world__srv__PayloadTrigger_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__srv__PayloadTrigger_Response__Sequence * array = (underground_world__srv__PayloadTrigger_Response__Sequence *)allocator.allocate(sizeof(underground_world__srv__PayloadTrigger_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = underground_world__srv__PayloadTrigger_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
underground_world__srv__PayloadTrigger_Response__Sequence__destroy(underground_world__srv__PayloadTrigger_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    underground_world__srv__PayloadTrigger_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
underground_world__srv__PayloadTrigger_Response__Sequence__are_equal(const underground_world__srv__PayloadTrigger_Response__Sequence * lhs, const underground_world__srv__PayloadTrigger_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!underground_world__srv__PayloadTrigger_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
underground_world__srv__PayloadTrigger_Response__Sequence__copy(
  const underground_world__srv__PayloadTrigger_Response__Sequence * input,
  underground_world__srv__PayloadTrigger_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(underground_world__srv__PayloadTrigger_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(underground_world__srv__PayloadTrigger_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    underground_world__srv__PayloadTrigger_Response * data =
      (underground_world__srv__PayloadTrigger_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!underground_world__srv__PayloadTrigger_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          underground_world__srv__PayloadTrigger_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!underground_world__srv__PayloadTrigger_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "underground_world/srv/detail/payload_trigger__functions.h"

bool
underground_world__srv__PayloadTrigger_Event__init(underground_world__srv__PayloadTrigger_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    underground_world__srv__PayloadTrigger_Event__fini(msg);
    return false;
  }
  // request
  if (!underground_world__srv__PayloadTrigger_Request__Sequence__init(&msg->request, 0)) {
    underground_world__srv__PayloadTrigger_Event__fini(msg);
    return false;
  }
  // response
  if (!underground_world__srv__PayloadTrigger_Response__Sequence__init(&msg->response, 0)) {
    underground_world__srv__PayloadTrigger_Event__fini(msg);
    return false;
  }
  return true;
}

void
underground_world__srv__PayloadTrigger_Event__fini(underground_world__srv__PayloadTrigger_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  underground_world__srv__PayloadTrigger_Request__Sequence__fini(&msg->request);
  // response
  underground_world__srv__PayloadTrigger_Response__Sequence__fini(&msg->response);
}

bool
underground_world__srv__PayloadTrigger_Event__are_equal(const underground_world__srv__PayloadTrigger_Event * lhs, const underground_world__srv__PayloadTrigger_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!underground_world__srv__PayloadTrigger_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!underground_world__srv__PayloadTrigger_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
underground_world__srv__PayloadTrigger_Event__copy(
  const underground_world__srv__PayloadTrigger_Event * input,
  underground_world__srv__PayloadTrigger_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!underground_world__srv__PayloadTrigger_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!underground_world__srv__PayloadTrigger_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

underground_world__srv__PayloadTrigger_Event *
underground_world__srv__PayloadTrigger_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__srv__PayloadTrigger_Event * msg = (underground_world__srv__PayloadTrigger_Event *)allocator.allocate(sizeof(underground_world__srv__PayloadTrigger_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(underground_world__srv__PayloadTrigger_Event));
  bool success = underground_world__srv__PayloadTrigger_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
underground_world__srv__PayloadTrigger_Event__destroy(underground_world__srv__PayloadTrigger_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    underground_world__srv__PayloadTrigger_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
underground_world__srv__PayloadTrigger_Event__Sequence__init(underground_world__srv__PayloadTrigger_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__srv__PayloadTrigger_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(underground_world__srv__PayloadTrigger_Event)) {
      return false;
    }
    data = (underground_world__srv__PayloadTrigger_Event *)allocator.zero_allocate(size, sizeof(underground_world__srv__PayloadTrigger_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = underground_world__srv__PayloadTrigger_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        underground_world__srv__PayloadTrigger_Event__fini(&data[i - 1]);
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
underground_world__srv__PayloadTrigger_Event__Sequence__fini(underground_world__srv__PayloadTrigger_Event__Sequence * array)
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
      underground_world__srv__PayloadTrigger_Event__fini(&array->data[i]);
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

underground_world__srv__PayloadTrigger_Event__Sequence *
underground_world__srv__PayloadTrigger_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  underground_world__srv__PayloadTrigger_Event__Sequence * array = (underground_world__srv__PayloadTrigger_Event__Sequence *)allocator.allocate(sizeof(underground_world__srv__PayloadTrigger_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = underground_world__srv__PayloadTrigger_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
underground_world__srv__PayloadTrigger_Event__Sequence__destroy(underground_world__srv__PayloadTrigger_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    underground_world__srv__PayloadTrigger_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
underground_world__srv__PayloadTrigger_Event__Sequence__are_equal(const underground_world__srv__PayloadTrigger_Event__Sequence * lhs, const underground_world__srv__PayloadTrigger_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!underground_world__srv__PayloadTrigger_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
underground_world__srv__PayloadTrigger_Event__Sequence__copy(
  const underground_world__srv__PayloadTrigger_Event__Sequence * input,
  underground_world__srv__PayloadTrigger_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(underground_world__srv__PayloadTrigger_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(underground_world__srv__PayloadTrigger_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    underground_world__srv__PayloadTrigger_Event * data =
      (underground_world__srv__PayloadTrigger_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!underground_world__srv__PayloadTrigger_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          underground_world__srv__PayloadTrigger_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!underground_world__srv__PayloadTrigger_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
