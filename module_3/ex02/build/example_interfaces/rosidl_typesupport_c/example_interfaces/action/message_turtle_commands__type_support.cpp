// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from example_interfaces:action/MessageTurtleCommands.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "example_interfaces/action/detail/message_turtle_commands__struct.h"
#include "example_interfaces/action/detail/message_turtle_commands__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MessageTurtleCommands_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_Goal_type_support_ids_t;

static const _MessageTurtleCommands_Goal_type_support_ids_t _MessageTurtleCommands_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_Goal_type_support_symbol_names_t _MessageTurtleCommands_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, action, MessageTurtleCommands_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, action, MessageTurtleCommands_Goal)),
  }
};

typedef struct _MessageTurtleCommands_Goal_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_Goal_type_support_data_t;

static _MessageTurtleCommands_Goal_type_support_data_t _MessageTurtleCommands_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_Goal_message_typesupport_map = {
  2,
  "example_interfaces",
  &_MessageTurtleCommands_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_Goal)() {
  return &::example_interfaces::action::rosidl_typesupport_c::MessageTurtleCommands_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MessageTurtleCommands_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_Result_type_support_ids_t;

static const _MessageTurtleCommands_Result_type_support_ids_t _MessageTurtleCommands_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_Result_type_support_symbol_names_t _MessageTurtleCommands_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, action, MessageTurtleCommands_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, action, MessageTurtleCommands_Result)),
  }
};

typedef struct _MessageTurtleCommands_Result_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_Result_type_support_data_t;

static _MessageTurtleCommands_Result_type_support_data_t _MessageTurtleCommands_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_Result_message_typesupport_map = {
  2,
  "example_interfaces",
  &_MessageTurtleCommands_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_Result)() {
  return &::example_interfaces::action::rosidl_typesupport_c::MessageTurtleCommands_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MessageTurtleCommands_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_Feedback_type_support_ids_t;

static const _MessageTurtleCommands_Feedback_type_support_ids_t _MessageTurtleCommands_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_Feedback_type_support_symbol_names_t _MessageTurtleCommands_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, action, MessageTurtleCommands_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, action, MessageTurtleCommands_Feedback)),
  }
};

typedef struct _MessageTurtleCommands_Feedback_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_Feedback_type_support_data_t;

static _MessageTurtleCommands_Feedback_type_support_data_t _MessageTurtleCommands_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_Feedback_message_typesupport_map = {
  2,
  "example_interfaces",
  &_MessageTurtleCommands_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_Feedback)() {
  return &::example_interfaces::action::rosidl_typesupport_c::MessageTurtleCommands_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MessageTurtleCommands_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_SendGoal_Request_type_support_ids_t;

static const _MessageTurtleCommands_SendGoal_Request_type_support_ids_t _MessageTurtleCommands_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_SendGoal_Request_type_support_symbol_names_t _MessageTurtleCommands_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, action, MessageTurtleCommands_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, action, MessageTurtleCommands_SendGoal_Request)),
  }
};

typedef struct _MessageTurtleCommands_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_SendGoal_Request_type_support_data_t;

static _MessageTurtleCommands_SendGoal_Request_type_support_data_t _MessageTurtleCommands_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_SendGoal_Request_message_typesupport_map = {
  2,
  "example_interfaces",
  &_MessageTurtleCommands_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_SendGoal_Request)() {
  return &::example_interfaces::action::rosidl_typesupport_c::MessageTurtleCommands_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MessageTurtleCommands_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_SendGoal_Response_type_support_ids_t;

static const _MessageTurtleCommands_SendGoal_Response_type_support_ids_t _MessageTurtleCommands_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_SendGoal_Response_type_support_symbol_names_t _MessageTurtleCommands_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, action, MessageTurtleCommands_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, action, MessageTurtleCommands_SendGoal_Response)),
  }
};

typedef struct _MessageTurtleCommands_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_SendGoal_Response_type_support_data_t;

static _MessageTurtleCommands_SendGoal_Response_type_support_data_t _MessageTurtleCommands_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_SendGoal_Response_message_typesupport_map = {
  2,
  "example_interfaces",
  &_MessageTurtleCommands_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_SendGoal_Response)() {
  return &::example_interfaces::action::rosidl_typesupport_c::MessageTurtleCommands_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MessageTurtleCommands_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_SendGoal_type_support_ids_t;

static const _MessageTurtleCommands_SendGoal_type_support_ids_t _MessageTurtleCommands_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_SendGoal_type_support_symbol_names_t _MessageTurtleCommands_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, action, MessageTurtleCommands_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, action, MessageTurtleCommands_SendGoal)),
  }
};

typedef struct _MessageTurtleCommands_SendGoal_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_SendGoal_type_support_data_t;

static _MessageTurtleCommands_SendGoal_type_support_data_t _MessageTurtleCommands_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_SendGoal_service_typesupport_map = {
  2,
  "example_interfaces",
  &_MessageTurtleCommands_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MessageTurtleCommands_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_SendGoal)() {
  return &::example_interfaces::action::rosidl_typesupport_c::MessageTurtleCommands_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MessageTurtleCommands_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_GetResult_Request_type_support_ids_t;

static const _MessageTurtleCommands_GetResult_Request_type_support_ids_t _MessageTurtleCommands_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_GetResult_Request_type_support_symbol_names_t _MessageTurtleCommands_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, action, MessageTurtleCommands_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, action, MessageTurtleCommands_GetResult_Request)),
  }
};

typedef struct _MessageTurtleCommands_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_GetResult_Request_type_support_data_t;

static _MessageTurtleCommands_GetResult_Request_type_support_data_t _MessageTurtleCommands_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_GetResult_Request_message_typesupport_map = {
  2,
  "example_interfaces",
  &_MessageTurtleCommands_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_GetResult_Request)() {
  return &::example_interfaces::action::rosidl_typesupport_c::MessageTurtleCommands_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MessageTurtleCommands_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_GetResult_Response_type_support_ids_t;

static const _MessageTurtleCommands_GetResult_Response_type_support_ids_t _MessageTurtleCommands_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_GetResult_Response_type_support_symbol_names_t _MessageTurtleCommands_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, action, MessageTurtleCommands_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, action, MessageTurtleCommands_GetResult_Response)),
  }
};

typedef struct _MessageTurtleCommands_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_GetResult_Response_type_support_data_t;

static _MessageTurtleCommands_GetResult_Response_type_support_data_t _MessageTurtleCommands_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_GetResult_Response_message_typesupport_map = {
  2,
  "example_interfaces",
  &_MessageTurtleCommands_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_GetResult_Response)() {
  return &::example_interfaces::action::rosidl_typesupport_c::MessageTurtleCommands_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MessageTurtleCommands_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_GetResult_type_support_ids_t;

static const _MessageTurtleCommands_GetResult_type_support_ids_t _MessageTurtleCommands_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_GetResult_type_support_symbol_names_t _MessageTurtleCommands_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, action, MessageTurtleCommands_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, action, MessageTurtleCommands_GetResult)),
  }
};

typedef struct _MessageTurtleCommands_GetResult_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_GetResult_type_support_data_t;

static _MessageTurtleCommands_GetResult_type_support_data_t _MessageTurtleCommands_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_GetResult_service_typesupport_map = {
  2,
  "example_interfaces",
  &_MessageTurtleCommands_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MessageTurtleCommands_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_GetResult)() {
  return &::example_interfaces::action::rosidl_typesupport_c::MessageTurtleCommands_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__struct.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace example_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MessageTurtleCommands_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MessageTurtleCommands_FeedbackMessage_type_support_ids_t;

static const _MessageTurtleCommands_FeedbackMessage_type_support_ids_t _MessageTurtleCommands_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MessageTurtleCommands_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MessageTurtleCommands_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MessageTurtleCommands_FeedbackMessage_type_support_symbol_names_t _MessageTurtleCommands_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, action, MessageTurtleCommands_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, action, MessageTurtleCommands_FeedbackMessage)),
  }
};

typedef struct _MessageTurtleCommands_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MessageTurtleCommands_FeedbackMessage_type_support_data_t;

static _MessageTurtleCommands_FeedbackMessage_type_support_data_t _MessageTurtleCommands_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MessageTurtleCommands_FeedbackMessage_message_typesupport_map = {
  2,
  "example_interfaces",
  &_MessageTurtleCommands_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MessageTurtleCommands_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MessageTurtleCommands_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MessageTurtleCommands_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MessageTurtleCommands_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace example_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_FeedbackMessage)() {
  return &::example_interfaces::action::rosidl_typesupport_c::MessageTurtleCommands_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "example_interfaces/action/message_turtle_commands.h"
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__type_support.h"

static rosidl_action_type_support_t _example_interfaces__action__MessageTurtleCommands__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands)()
{
  // Thread-safe by always writing the same values to the static struct
  _example_interfaces__action__MessageTurtleCommands__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_SendGoal)();
  _example_interfaces__action__MessageTurtleCommands__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_GetResult)();
  _example_interfaces__action__MessageTurtleCommands__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _example_interfaces__action__MessageTurtleCommands__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, example_interfaces, action, MessageTurtleCommands_FeedbackMessage)();
  _example_interfaces__action__MessageTurtleCommands__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_example_interfaces__action__MessageTurtleCommands__typesupport_c;
}

#ifdef __cplusplus
}
#endif
