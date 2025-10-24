// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_hg:msg/LowCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_hg/msg/detail/low_cmd__rosidl_typesupport_introspection_c.h"
#include "unitree_hg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_hg/msg/detail/low_cmd__functions.h"
#include "unitree_hg/msg/detail/low_cmd__struct.h"


// Include directives for member types
// Member `motor_cmd`
#include "unitree_hg/msg/motor_cmd.h"
// Member `motor_cmd`
#include "unitree_hg/msg/detail/motor_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_hg__msg__LowCmd__init(message_memory);
}

void unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_fini_function(void * message_memory)
{
  unitree_hg__msg__LowCmd__fini(message_memory);
}

size_t unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__size_function__LowCmd__motor_cmd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 35;
}

const void * unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_const_function__LowCmd__motor_cmd(
  const void * untyped_member, size_t index)
{
  const unitree_hg__msg__MotorCmd * member =
    (const unitree_hg__msg__MotorCmd *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_function__LowCmd__motor_cmd(
  void * untyped_member, size_t index)
{
  unitree_hg__msg__MotorCmd * member =
    (unitree_hg__msg__MotorCmd *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__fetch_function__LowCmd__motor_cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const unitree_hg__msg__MotorCmd * item =
    ((const unitree_hg__msg__MotorCmd *)
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_const_function__LowCmd__motor_cmd(untyped_member, index));
  unitree_hg__msg__MotorCmd * value =
    (unitree_hg__msg__MotorCmd *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__assign_function__LowCmd__motor_cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  unitree_hg__msg__MotorCmd * item =
    ((unitree_hg__msg__MotorCmd *)
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_function__LowCmd__motor_cmd(untyped_member, index));
  const unitree_hg__msg__MotorCmd * value =
    (const unitree_hg__msg__MotorCmd *)(untyped_value);
  *item = *value;
}

size_t unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__size_function__LowCmd__reserve(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_const_function__LowCmd__reserve(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_function__LowCmd__reserve(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__fetch_function__LowCmd__reserve(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_const_function__LowCmd__reserve(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__assign_function__LowCmd__reserve(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_function__LowCmd__reserve(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array[5] = {
  {
    "mode_pr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowCmd, mode_pr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode_machine",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowCmd, mode_machine),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    35,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowCmd, motor_cmd),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__size_function__LowCmd__motor_cmd,  // size() function pointer
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_const_function__LowCmd__motor_cmd,  // get_const(index) function pointer
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_function__LowCmd__motor_cmd,  // get(index) function pointer
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__fetch_function__LowCmd__motor_cmd,  // fetch(index, &value) function pointer
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__assign_function__LowCmd__motor_cmd,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowCmd, reserve),  // bytes offset in struct
    NULL,  // default value
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__size_function__LowCmd__reserve,  // size() function pointer
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_const_function__LowCmd__reserve,  // get_const(index) function pointer
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__get_function__LowCmd__reserve,  // get(index) function pointer
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__fetch_function__LowCmd__reserve,  // fetch(index, &value) function pointer
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__assign_function__LowCmd__reserve,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_hg__msg__LowCmd, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_members = {
  "unitree_hg__msg",  // message namespace
  "LowCmd",  // message name
  5,  // number of fields
  sizeof(unitree_hg__msg__LowCmd),
  unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array,  // message members
  unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle = {
  0,
  &unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_hg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, LowCmd)() {
  unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_hg, msg, MotorCmd)();
  if (!unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle.typesupport_identifier) {
    unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &unitree_hg__msg__LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
