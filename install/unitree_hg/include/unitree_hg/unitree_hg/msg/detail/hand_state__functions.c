// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_hg:msg/HandState.idl
// generated code does not contain a copyright notice
#include "unitree_hg/msg/detail/hand_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor_state`
#include "unitree_hg/msg/detail/motor_state__functions.h"
// Member `press_sensor_state`
#include "unitree_hg/msg/detail/press_sensor_state__functions.h"
// Member `imu_state`
#include "unitree_hg/msg/detail/imu_state__functions.h"

bool
unitree_hg__msg__HandState__init(unitree_hg__msg__HandState * msg)
{
  if (!msg) {
    return false;
  }
  // motor_state
  if (!unitree_hg__msg__MotorState__Sequence__init(&msg->motor_state, 0)) {
    unitree_hg__msg__HandState__fini(msg);
    return false;
  }
  // press_sensor_state
  if (!unitree_hg__msg__PressSensorState__Sequence__init(&msg->press_sensor_state, 0)) {
    unitree_hg__msg__HandState__fini(msg);
    return false;
  }
  // imu_state
  if (!unitree_hg__msg__IMUState__init(&msg->imu_state)) {
    unitree_hg__msg__HandState__fini(msg);
    return false;
  }
  // power_v
  // power_a
  // system_v
  // device_v
  // error
  // reserve
  return true;
}

void
unitree_hg__msg__HandState__fini(unitree_hg__msg__HandState * msg)
{
  if (!msg) {
    return;
  }
  // motor_state
  unitree_hg__msg__MotorState__Sequence__fini(&msg->motor_state);
  // press_sensor_state
  unitree_hg__msg__PressSensorState__Sequence__fini(&msg->press_sensor_state);
  // imu_state
  unitree_hg__msg__IMUState__fini(&msg->imu_state);
  // power_v
  // power_a
  // system_v
  // device_v
  // error
  // reserve
}

bool
unitree_hg__msg__HandState__are_equal(const unitree_hg__msg__HandState * lhs, const unitree_hg__msg__HandState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_state
  if (!unitree_hg__msg__MotorState__Sequence__are_equal(
      &(lhs->motor_state), &(rhs->motor_state)))
  {
    return false;
  }
  // press_sensor_state
  if (!unitree_hg__msg__PressSensorState__Sequence__are_equal(
      &(lhs->press_sensor_state), &(rhs->press_sensor_state)))
  {
    return false;
  }
  // imu_state
  if (!unitree_hg__msg__IMUState__are_equal(
      &(lhs->imu_state), &(rhs->imu_state)))
  {
    return false;
  }
  // power_v
  if (lhs->power_v != rhs->power_v) {
    return false;
  }
  // power_a
  if (lhs->power_a != rhs->power_a) {
    return false;
  }
  // system_v
  if (lhs->system_v != rhs->system_v) {
    return false;
  }
  // device_v
  if (lhs->device_v != rhs->device_v) {
    return false;
  }
  // error
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->error[i] != rhs->error[i]) {
      return false;
    }
  }
  // reserve
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->reserve[i] != rhs->reserve[i]) {
      return false;
    }
  }
  return true;
}

bool
unitree_hg__msg__HandState__copy(
  const unitree_hg__msg__HandState * input,
  unitree_hg__msg__HandState * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_state
  if (!unitree_hg__msg__MotorState__Sequence__copy(
      &(input->motor_state), &(output->motor_state)))
  {
    return false;
  }
  // press_sensor_state
  if (!unitree_hg__msg__PressSensorState__Sequence__copy(
      &(input->press_sensor_state), &(output->press_sensor_state)))
  {
    return false;
  }
  // imu_state
  if (!unitree_hg__msg__IMUState__copy(
      &(input->imu_state), &(output->imu_state)))
  {
    return false;
  }
  // power_v
  output->power_v = input->power_v;
  // power_a
  output->power_a = input->power_a;
  // system_v
  output->system_v = input->system_v;
  // device_v
  output->device_v = input->device_v;
  // error
  for (size_t i = 0; i < 2; ++i) {
    output->error[i] = input->error[i];
  }
  // reserve
  for (size_t i = 0; i < 2; ++i) {
    output->reserve[i] = input->reserve[i];
  }
  return true;
}

unitree_hg__msg__HandState *
unitree_hg__msg__HandState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_hg__msg__HandState * msg = (unitree_hg__msg__HandState *)allocator.allocate(sizeof(unitree_hg__msg__HandState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_hg__msg__HandState));
  bool success = unitree_hg__msg__HandState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unitree_hg__msg__HandState__destroy(unitree_hg__msg__HandState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unitree_hg__msg__HandState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unitree_hg__msg__HandState__Sequence__init(unitree_hg__msg__HandState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_hg__msg__HandState * data = NULL;

  if (size) {
    data = (unitree_hg__msg__HandState *)allocator.zero_allocate(size, sizeof(unitree_hg__msg__HandState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_hg__msg__HandState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_hg__msg__HandState__fini(&data[i - 1]);
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
unitree_hg__msg__HandState__Sequence__fini(unitree_hg__msg__HandState__Sequence * array)
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
      unitree_hg__msg__HandState__fini(&array->data[i]);
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

unitree_hg__msg__HandState__Sequence *
unitree_hg__msg__HandState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_hg__msg__HandState__Sequence * array = (unitree_hg__msg__HandState__Sequence *)allocator.allocate(sizeof(unitree_hg__msg__HandState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unitree_hg__msg__HandState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unitree_hg__msg__HandState__Sequence__destroy(unitree_hg__msg__HandState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unitree_hg__msg__HandState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unitree_hg__msg__HandState__Sequence__are_equal(const unitree_hg__msg__HandState__Sequence * lhs, const unitree_hg__msg__HandState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unitree_hg__msg__HandState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unitree_hg__msg__HandState__Sequence__copy(
  const unitree_hg__msg__HandState__Sequence * input,
  unitree_hg__msg__HandState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unitree_hg__msg__HandState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    unitree_hg__msg__HandState * data =
      (unitree_hg__msg__HandState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unitree_hg__msg__HandState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          unitree_hg__msg__HandState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!unitree_hg__msg__HandState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
