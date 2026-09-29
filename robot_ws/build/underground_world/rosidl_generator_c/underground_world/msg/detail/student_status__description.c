// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from underground_world:msg/StudentStatus.idl
// generated code does not contain a copyright notice

#include "underground_world/msg/detail/student_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__msg__StudentStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0x69, 0x4d, 0xad, 0xff, 0x1e, 0x88, 0xde,
      0xd7, 0x0e, 0x46, 0x7f, 0x32, 0x12, 0x26, 0x9c,
      0xff, 0x9d, 0xa2, 0xe9, 0x3c, 0xed, 0xfa, 0x80,
      0xad, 0x16, 0xfc, 0x3b, 0xc3, 0x14, 0x37, 0x8a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char underground_world__msg__StudentStatus__TYPE_NAME[] = "underground_world/msg/StudentStatus";

// Define type names, field names, and default values
static char underground_world__msg__StudentStatus__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field underground_world__msg__StudentStatus__FIELDS[] = {
  {
    {underground_world__msg__StudentStatus__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
underground_world__msg__StudentStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__msg__StudentStatus__TYPE_NAME, 35, 35},
      {underground_world__msg__StudentStatus__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 EXPLORING=0\n"
  "uint8 ENGAGING=1\n"
  "uint8 RETURNING=2\n"
  "uint8 DONE=3\n"
  "uint8 FAILED=4\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
underground_world__msg__StudentStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__msg__StudentStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 93, 93},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__msg__StudentStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__msg__StudentStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
