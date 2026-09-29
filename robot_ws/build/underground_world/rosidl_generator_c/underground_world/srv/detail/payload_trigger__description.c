// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from underground_world:srv/PayloadTrigger.idl
// generated code does not contain a copyright notice

#include "underground_world/srv/detail/payload_trigger__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__srv__PayloadTrigger__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x97, 0x6b, 0x12, 0xf4, 0x6b, 0x15, 0x1a,
      0xf0, 0x6e, 0x8f, 0xdc, 0x12, 0x6f, 0x40, 0x7f,
      0x67, 0xc5, 0xc7, 0x2c, 0x2b, 0xf2, 0xb2, 0xc9,
      0xb3, 0x83, 0xdb, 0x4a, 0x33, 0xcc, 0x60, 0x1b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__srv__PayloadTrigger_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0x1c, 0x2d, 0x04, 0xf2, 0xcf, 0x36, 0xf8,
      0x80, 0xf7, 0x87, 0x2e, 0xa3, 0xb8, 0x6c, 0x08,
      0x72, 0x14, 0x49, 0x0b, 0x59, 0x87, 0x87, 0x29,
      0xa4, 0x5e, 0xd0, 0x2a, 0x83, 0x0e, 0x01, 0x3c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__srv__PayloadTrigger_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0xb2, 0x9e, 0x69, 0x9d, 0xb6, 0xc4, 0xd6,
      0x74, 0x44, 0x18, 0x14, 0xf7, 0x37, 0x37, 0x84,
      0xcb, 0x86, 0x50, 0x13, 0x8f, 0x6c, 0x2a, 0xcc,
      0x9f, 0xcd, 0xd8, 0x9d, 0x81, 0x72, 0x77, 0xe7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_underground_world
const rosidl_type_hash_t *
underground_world__srv__PayloadTrigger_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0xfe, 0x48, 0x5e, 0xb4, 0x5a, 0xd4, 0xa1,
      0x71, 0x31, 0x69, 0x8e, 0xa3, 0xef, 0x2c, 0xb9,
      0x63, 0x24, 0xdf, 0x96, 0xcf, 0x5b, 0xfb, 0xfc,
      0x98, 0x47, 0x11, 0x68, 0x29, 0x1f, 0x77, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char underground_world__srv__PayloadTrigger__TYPE_NAME[] = "underground_world/srv/PayloadTrigger";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char underground_world__srv__PayloadTrigger_Event__TYPE_NAME[] = "underground_world/srv/PayloadTrigger_Event";
static char underground_world__srv__PayloadTrigger_Request__TYPE_NAME[] = "underground_world/srv/PayloadTrigger_Request";
static char underground_world__srv__PayloadTrigger_Response__TYPE_NAME[] = "underground_world/srv/PayloadTrigger_Response";

// Define type names, field names, and default values
static char underground_world__srv__PayloadTrigger__FIELD_NAME__request_message[] = "request_message";
static char underground_world__srv__PayloadTrigger__FIELD_NAME__response_message[] = "response_message";
static char underground_world__srv__PayloadTrigger__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field underground_world__srv__PayloadTrigger__FIELDS[] = {
  {
    {underground_world__srv__PayloadTrigger__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {underground_world__srv__PayloadTrigger_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {underground_world__srv__PayloadTrigger_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {underground_world__srv__PayloadTrigger_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription underground_world__srv__PayloadTrigger__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
underground_world__srv__PayloadTrigger__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__srv__PayloadTrigger__TYPE_NAME, 36, 36},
      {underground_world__srv__PayloadTrigger__FIELDS, 3, 3},
    },
    {underground_world__srv__PayloadTrigger__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = underground_world__srv__PayloadTrigger_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = underground_world__srv__PayloadTrigger_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = underground_world__srv__PayloadTrigger_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char underground_world__srv__PayloadTrigger_Request__FIELD_NAME__contact_id[] = "contact_id";
static char underground_world__srv__PayloadTrigger_Request__FIELD_NAME__x[] = "x";
static char underground_world__srv__PayloadTrigger_Request__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field underground_world__srv__PayloadTrigger_Request__FIELDS[] = {
  {
    {underground_world__srv__PayloadTrigger_Request__FIELD_NAME__contact_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
underground_world__srv__PayloadTrigger_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__srv__PayloadTrigger_Request__TYPE_NAME, 44, 44},
      {underground_world__srv__PayloadTrigger_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char underground_world__srv__PayloadTrigger_Response__FIELD_NAME__accepted[] = "accepted";
static char underground_world__srv__PayloadTrigger_Response__FIELD_NAME__reason[] = "reason";

static rosidl_runtime_c__type_description__Field underground_world__srv__PayloadTrigger_Response__FIELDS[] = {
  {
    {underground_world__srv__PayloadTrigger_Response__FIELD_NAME__accepted, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger_Response__FIELD_NAME__reason, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
underground_world__srv__PayloadTrigger_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__srv__PayloadTrigger_Response__TYPE_NAME, 45, 45},
      {underground_world__srv__PayloadTrigger_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char underground_world__srv__PayloadTrigger_Event__FIELD_NAME__info[] = "info";
static char underground_world__srv__PayloadTrigger_Event__FIELD_NAME__request[] = "request";
static char underground_world__srv__PayloadTrigger_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field underground_world__srv__PayloadTrigger_Event__FIELDS[] = {
  {
    {underground_world__srv__PayloadTrigger_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {underground_world__srv__PayloadTrigger_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {underground_world__srv__PayloadTrigger_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription underground_world__srv__PayloadTrigger_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {underground_world__srv__PayloadTrigger_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
underground_world__srv__PayloadTrigger_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {underground_world__srv__PayloadTrigger_Event__TYPE_NAME, 42, 42},
      {underground_world__srv__PayloadTrigger_Event__FIELDS, 3, 3},
    },
    {underground_world__srv__PayloadTrigger_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = underground_world__srv__PayloadTrigger_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = underground_world__srv__PayloadTrigger_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 contact_id\n"
  "int32 x\n"
  "int32 y\n"
  "---\n"
  "bool accepted\n"
  "string reason";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
underground_world__srv__PayloadTrigger__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__srv__PayloadTrigger__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
underground_world__srv__PayloadTrigger_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__srv__PayloadTrigger_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
underground_world__srv__PayloadTrigger_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__srv__PayloadTrigger_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
underground_world__srv__PayloadTrigger_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {underground_world__srv__PayloadTrigger_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__srv__PayloadTrigger__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__srv__PayloadTrigger__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *underground_world__srv__PayloadTrigger_Event__get_individual_type_description_source(NULL);
    sources[4] = *underground_world__srv__PayloadTrigger_Request__get_individual_type_description_source(NULL);
    sources[5] = *underground_world__srv__PayloadTrigger_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__srv__PayloadTrigger_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__srv__PayloadTrigger_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__srv__PayloadTrigger_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__srv__PayloadTrigger_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
underground_world__srv__PayloadTrigger_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *underground_world__srv__PayloadTrigger_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *underground_world__srv__PayloadTrigger_Request__get_individual_type_description_source(NULL);
    sources[4] = *underground_world__srv__PayloadTrigger_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
