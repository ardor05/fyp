// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robotnik_perception_msgs:msg/DetectionArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robotnik_perception_msgs/msg/detail/detection_array__rosidl_typesupport_introspection_c.h"
#include "robotnik_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robotnik_perception_msgs/msg/detail/detection_array__functions.h"
#include "robotnik_perception_msgs/msg/detail/detection_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `objects`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robotnik_perception_msgs__msg__DetectionArray__init(message_memory);
}

void robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_fini_function(void * message_memory)
{
  robotnik_perception_msgs__msg__DetectionArray__fini(message_memory);
}

size_t robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__size_function__DetectionArray__objects(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__get_const_function__DetectionArray__objects(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__get_function__DetectionArray__objects(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__fetch_function__DetectionArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__get_const_function__DetectionArray__objects(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__assign_function__DetectionArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__get_function__DetectionArray__objects(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__resize_function__DetectionArray__objects(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_perception_msgs__msg__DetectionArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotnik_perception_msgs__msg__DetectionArray, objects),  // bytes offset in struct
    NULL,  // default value
    robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__size_function__DetectionArray__objects,  // size() function pointer
    robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__get_const_function__DetectionArray__objects,  // get_const(index) function pointer
    robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__get_function__DetectionArray__objects,  // get(index) function pointer
    robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__fetch_function__DetectionArray__objects,  // fetch(index, &value) function pointer
    robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__assign_function__DetectionArray__objects,  // assign(index, value) function pointer
    robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__resize_function__DetectionArray__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_members = {
  "robotnik_perception_msgs__msg",  // message namespace
  "DetectionArray",  // message name
  2,  // number of fields
  sizeof(robotnik_perception_msgs__msg__DetectionArray),
  false,  // has_any_key_member_
  robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_member_array,  // message members
  robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_type_support_handle = {
  0,
  &robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_members,
  get_message_typesupport_handle_function,
  &robotnik_perception_msgs__msg__DetectionArray__get_type_hash,
  &robotnik_perception_msgs__msg__DetectionArray__get_type_description,
  &robotnik_perception_msgs__msg__DetectionArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robotnik_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotnik_perception_msgs, msg, DetectionArray)() {
  robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_type_support_handle.typesupport_identifier) {
    robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robotnik_perception_msgs__msg__DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
