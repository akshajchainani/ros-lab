// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from experiment_interfaces:msg/Birthday.idl
// generated code does not contain a copyright notice
#include "experiment_interfaces/msg/detail/birthday__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
experiment_interfaces__msg__Birthday__init(experiment_interfaces__msg__Birthday * msg)
{
  if (!msg) {
    return false;
  }
  // year
  // month
  // day
  return true;
}

void
experiment_interfaces__msg__Birthday__fini(experiment_interfaces__msg__Birthday * msg)
{
  if (!msg) {
    return;
  }
  // year
  // month
  // day
}

bool
experiment_interfaces__msg__Birthday__are_equal(const experiment_interfaces__msg__Birthday * lhs, const experiment_interfaces__msg__Birthday * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // year
  if (lhs->year != rhs->year) {
    return false;
  }
  // month
  if (lhs->month != rhs->month) {
    return false;
  }
  // day
  if (lhs->day != rhs->day) {
    return false;
  }
  return true;
}

bool
experiment_interfaces__msg__Birthday__copy(
  const experiment_interfaces__msg__Birthday * input,
  experiment_interfaces__msg__Birthday * output)
{
  if (!input || !output) {
    return false;
  }
  // year
  output->year = input->year;
  // month
  output->month = input->month;
  // day
  output->day = input->day;
  return true;
}

experiment_interfaces__msg__Birthday *
experiment_interfaces__msg__Birthday__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  experiment_interfaces__msg__Birthday * msg = (experiment_interfaces__msg__Birthday *)allocator.allocate(sizeof(experiment_interfaces__msg__Birthday), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(experiment_interfaces__msg__Birthday));
  bool success = experiment_interfaces__msg__Birthday__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
experiment_interfaces__msg__Birthday__destroy(experiment_interfaces__msg__Birthday * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    experiment_interfaces__msg__Birthday__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
experiment_interfaces__msg__Birthday__Sequence__init(experiment_interfaces__msg__Birthday__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  experiment_interfaces__msg__Birthday * data = NULL;

  if (size) {
    data = (experiment_interfaces__msg__Birthday *)allocator.zero_allocate(size, sizeof(experiment_interfaces__msg__Birthday), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = experiment_interfaces__msg__Birthday__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        experiment_interfaces__msg__Birthday__fini(&data[i - 1]);
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
experiment_interfaces__msg__Birthday__Sequence__fini(experiment_interfaces__msg__Birthday__Sequence * array)
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
      experiment_interfaces__msg__Birthday__fini(&array->data[i]);
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

experiment_interfaces__msg__Birthday__Sequence *
experiment_interfaces__msg__Birthday__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  experiment_interfaces__msg__Birthday__Sequence * array = (experiment_interfaces__msg__Birthday__Sequence *)allocator.allocate(sizeof(experiment_interfaces__msg__Birthday__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = experiment_interfaces__msg__Birthday__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
experiment_interfaces__msg__Birthday__Sequence__destroy(experiment_interfaces__msg__Birthday__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    experiment_interfaces__msg__Birthday__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
experiment_interfaces__msg__Birthday__Sequence__are_equal(const experiment_interfaces__msg__Birthday__Sequence * lhs, const experiment_interfaces__msg__Birthday__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!experiment_interfaces__msg__Birthday__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
experiment_interfaces__msg__Birthday__Sequence__copy(
  const experiment_interfaces__msg__Birthday__Sequence * input,
  experiment_interfaces__msg__Birthday__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(experiment_interfaces__msg__Birthday);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    experiment_interfaces__msg__Birthday * data =
      (experiment_interfaces__msg__Birthday *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!experiment_interfaces__msg__Birthday__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          experiment_interfaces__msg__Birthday__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!experiment_interfaces__msg__Birthday__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
