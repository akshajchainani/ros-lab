// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from experiment_interfaces:srv/AddThreeints.idl
// generated code does not contain a copyright notice
#include "experiment_interfaces/srv/detail/add_threeints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
experiment_interfaces__srv__AddThreeints_Request__init(experiment_interfaces__srv__AddThreeints_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
experiment_interfaces__srv__AddThreeints_Request__fini(experiment_interfaces__srv__AddThreeints_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

bool
experiment_interfaces__srv__AddThreeints_Request__are_equal(const experiment_interfaces__srv__AddThreeints_Request * lhs, const experiment_interfaces__srv__AddThreeints_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  return true;
}

bool
experiment_interfaces__srv__AddThreeints_Request__copy(
  const experiment_interfaces__srv__AddThreeints_Request * input,
  experiment_interfaces__srv__AddThreeints_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  return true;
}

experiment_interfaces__srv__AddThreeints_Request *
experiment_interfaces__srv__AddThreeints_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  experiment_interfaces__srv__AddThreeints_Request * msg = (experiment_interfaces__srv__AddThreeints_Request *)allocator.allocate(sizeof(experiment_interfaces__srv__AddThreeints_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(experiment_interfaces__srv__AddThreeints_Request));
  bool success = experiment_interfaces__srv__AddThreeints_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
experiment_interfaces__srv__AddThreeints_Request__destroy(experiment_interfaces__srv__AddThreeints_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    experiment_interfaces__srv__AddThreeints_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
experiment_interfaces__srv__AddThreeints_Request__Sequence__init(experiment_interfaces__srv__AddThreeints_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  experiment_interfaces__srv__AddThreeints_Request * data = NULL;

  if (size) {
    data = (experiment_interfaces__srv__AddThreeints_Request *)allocator.zero_allocate(size, sizeof(experiment_interfaces__srv__AddThreeints_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = experiment_interfaces__srv__AddThreeints_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        experiment_interfaces__srv__AddThreeints_Request__fini(&data[i - 1]);
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
experiment_interfaces__srv__AddThreeints_Request__Sequence__fini(experiment_interfaces__srv__AddThreeints_Request__Sequence * array)
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
      experiment_interfaces__srv__AddThreeints_Request__fini(&array->data[i]);
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

experiment_interfaces__srv__AddThreeints_Request__Sequence *
experiment_interfaces__srv__AddThreeints_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  experiment_interfaces__srv__AddThreeints_Request__Sequence * array = (experiment_interfaces__srv__AddThreeints_Request__Sequence *)allocator.allocate(sizeof(experiment_interfaces__srv__AddThreeints_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = experiment_interfaces__srv__AddThreeints_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
experiment_interfaces__srv__AddThreeints_Request__Sequence__destroy(experiment_interfaces__srv__AddThreeints_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    experiment_interfaces__srv__AddThreeints_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
experiment_interfaces__srv__AddThreeints_Request__Sequence__are_equal(const experiment_interfaces__srv__AddThreeints_Request__Sequence * lhs, const experiment_interfaces__srv__AddThreeints_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!experiment_interfaces__srv__AddThreeints_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
experiment_interfaces__srv__AddThreeints_Request__Sequence__copy(
  const experiment_interfaces__srv__AddThreeints_Request__Sequence * input,
  experiment_interfaces__srv__AddThreeints_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(experiment_interfaces__srv__AddThreeints_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    experiment_interfaces__srv__AddThreeints_Request * data =
      (experiment_interfaces__srv__AddThreeints_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!experiment_interfaces__srv__AddThreeints_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          experiment_interfaces__srv__AddThreeints_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!experiment_interfaces__srv__AddThreeints_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
experiment_interfaces__srv__AddThreeints_Response__init(experiment_interfaces__srv__AddThreeints_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
experiment_interfaces__srv__AddThreeints_Response__fini(experiment_interfaces__srv__AddThreeints_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
experiment_interfaces__srv__AddThreeints_Response__are_equal(const experiment_interfaces__srv__AddThreeints_Response * lhs, const experiment_interfaces__srv__AddThreeints_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
experiment_interfaces__srv__AddThreeints_Response__copy(
  const experiment_interfaces__srv__AddThreeints_Response * input,
  experiment_interfaces__srv__AddThreeints_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

experiment_interfaces__srv__AddThreeints_Response *
experiment_interfaces__srv__AddThreeints_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  experiment_interfaces__srv__AddThreeints_Response * msg = (experiment_interfaces__srv__AddThreeints_Response *)allocator.allocate(sizeof(experiment_interfaces__srv__AddThreeints_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(experiment_interfaces__srv__AddThreeints_Response));
  bool success = experiment_interfaces__srv__AddThreeints_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
experiment_interfaces__srv__AddThreeints_Response__destroy(experiment_interfaces__srv__AddThreeints_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    experiment_interfaces__srv__AddThreeints_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
experiment_interfaces__srv__AddThreeints_Response__Sequence__init(experiment_interfaces__srv__AddThreeints_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  experiment_interfaces__srv__AddThreeints_Response * data = NULL;

  if (size) {
    data = (experiment_interfaces__srv__AddThreeints_Response *)allocator.zero_allocate(size, sizeof(experiment_interfaces__srv__AddThreeints_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = experiment_interfaces__srv__AddThreeints_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        experiment_interfaces__srv__AddThreeints_Response__fini(&data[i - 1]);
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
experiment_interfaces__srv__AddThreeints_Response__Sequence__fini(experiment_interfaces__srv__AddThreeints_Response__Sequence * array)
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
      experiment_interfaces__srv__AddThreeints_Response__fini(&array->data[i]);
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

experiment_interfaces__srv__AddThreeints_Response__Sequence *
experiment_interfaces__srv__AddThreeints_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  experiment_interfaces__srv__AddThreeints_Response__Sequence * array = (experiment_interfaces__srv__AddThreeints_Response__Sequence *)allocator.allocate(sizeof(experiment_interfaces__srv__AddThreeints_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = experiment_interfaces__srv__AddThreeints_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
experiment_interfaces__srv__AddThreeints_Response__Sequence__destroy(experiment_interfaces__srv__AddThreeints_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    experiment_interfaces__srv__AddThreeints_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
experiment_interfaces__srv__AddThreeints_Response__Sequence__are_equal(const experiment_interfaces__srv__AddThreeints_Response__Sequence * lhs, const experiment_interfaces__srv__AddThreeints_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!experiment_interfaces__srv__AddThreeints_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
experiment_interfaces__srv__AddThreeints_Response__Sequence__copy(
  const experiment_interfaces__srv__AddThreeints_Response__Sequence * input,
  experiment_interfaces__srv__AddThreeints_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(experiment_interfaces__srv__AddThreeints_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    experiment_interfaces__srv__AddThreeints_Response * data =
      (experiment_interfaces__srv__AddThreeints_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!experiment_interfaces__srv__AddThreeints_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          experiment_interfaces__srv__AddThreeints_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!experiment_interfaces__srv__AddThreeints_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
