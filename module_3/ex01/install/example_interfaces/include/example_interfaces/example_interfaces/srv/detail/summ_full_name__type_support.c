// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from example_interfaces:srv/SummFullName.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "example_interfaces/srv/detail/summ_full_name__rosidl_typesupport_introspection_c.h"
#include "example_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "example_interfaces/srv/detail/summ_full_name__functions.h"
#include "example_interfaces/srv/detail/summ_full_name__struct.h"


// Include directives for member types
// Member `last_name`
// Member `name`
// Member `first_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_interfaces__srv__SummFullName_Request__init(message_memory);
}

void example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_fini_function(void * message_memory)
{
  example_interfaces__srv__SummFullName_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_message_member_array[3] = {
  {
    "last_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_interfaces__srv__SummFullName_Request, last_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_interfaces__srv__SummFullName_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "first_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_interfaces__srv__SummFullName_Request, first_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_message_members = {
  "example_interfaces__srv",  // message namespace
  "SummFullName_Request",  // message name
  3,  // number of fields
  sizeof(example_interfaces__srv__SummFullName_Request),
  example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_message_member_array,  // message members
  example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_message_type_support_handle = {
  0,
  &example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, SummFullName_Request)() {
  if (!example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_message_type_support_handle.typesupport_identifier) {
    example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &example_interfaces__srv__SummFullName_Request__rosidl_typesupport_introspection_c__SummFullName_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "example_interfaces/srv/detail/summ_full_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "example_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "example_interfaces/srv/detail/summ_full_name__functions.h"
// already included above
// #include "example_interfaces/srv/detail/summ_full_name__struct.h"


// Include directives for member types
// Member `full_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_interfaces__srv__SummFullName_Response__init(message_memory);
}

void example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_fini_function(void * message_memory)
{
  example_interfaces__srv__SummFullName_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_message_member_array[1] = {
  {
    "full_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_interfaces__srv__SummFullName_Response, full_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_message_members = {
  "example_interfaces__srv",  // message namespace
  "SummFullName_Response",  // message name
  1,  // number of fields
  sizeof(example_interfaces__srv__SummFullName_Response),
  example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_message_member_array,  // message members
  example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_message_type_support_handle = {
  0,
  &example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, SummFullName_Response)() {
  if (!example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_message_type_support_handle.typesupport_identifier) {
    example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &example_interfaces__srv__SummFullName_Response__rosidl_typesupport_introspection_c__SummFullName_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "example_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "example_interfaces/srv/detail/summ_full_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers example_interfaces__srv__detail__summ_full_name__rosidl_typesupport_introspection_c__SummFullName_service_members = {
  "example_interfaces__srv",  // service namespace
  "SummFullName",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // example_interfaces__srv__detail__summ_full_name__rosidl_typesupport_introspection_c__SummFullName_Request_message_type_support_handle,
  NULL  // response message
  // example_interfaces__srv__detail__summ_full_name__rosidl_typesupport_introspection_c__SummFullName_Response_message_type_support_handle
};

static rosidl_service_type_support_t example_interfaces__srv__detail__summ_full_name__rosidl_typesupport_introspection_c__SummFullName_service_type_support_handle = {
  0,
  &example_interfaces__srv__detail__summ_full_name__rosidl_typesupport_introspection_c__SummFullName_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, SummFullName_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, SummFullName_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, SummFullName)() {
  if (!example_interfaces__srv__detail__summ_full_name__rosidl_typesupport_introspection_c__SummFullName_service_type_support_handle.typesupport_identifier) {
    example_interfaces__srv__detail__summ_full_name__rosidl_typesupport_introspection_c__SummFullName_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)example_interfaces__srv__detail__summ_full_name__rosidl_typesupport_introspection_c__SummFullName_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, SummFullName_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, srv, SummFullName_Response)()->data;
  }

  return &example_interfaces__srv__detail__summ_full_name__rosidl_typesupport_introspection_c__SummFullName_service_type_support_handle;
}
