// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:action/MessageTurtleCommands.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__STRUCT_H_
#define EXAMPLE_INTERFACES__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MessageTurtleCommands in the package example_interfaces.
typedef struct example_interfaces__action__MessageTurtleCommands_Goal
{
  /// “forward”,”turn_left”, “turn_right”
  rosidl_runtime_c__String command;
  double s;
  double angle;
} example_interfaces__action__MessageTurtleCommands_Goal;

// Struct for a sequence of example_interfaces__action__MessageTurtleCommands_Goal.
typedef struct example_interfaces__action__MessageTurtleCommands_Goal__Sequence
{
  example_interfaces__action__MessageTurtleCommands_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__MessageTurtleCommands_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MessageTurtleCommands in the package example_interfaces.
typedef struct example_interfaces__action__MessageTurtleCommands_Result
{
  bool result;
} example_interfaces__action__MessageTurtleCommands_Result;

// Struct for a sequence of example_interfaces__action__MessageTurtleCommands_Result.
typedef struct example_interfaces__action__MessageTurtleCommands_Result__Sequence
{
  example_interfaces__action__MessageTurtleCommands_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__MessageTurtleCommands_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MessageTurtleCommands in the package example_interfaces.
typedef struct example_interfaces__action__MessageTurtleCommands_Feedback
{
  double odom;
} example_interfaces__action__MessageTurtleCommands_Feedback;

// Struct for a sequence of example_interfaces__action__MessageTurtleCommands_Feedback.
typedef struct example_interfaces__action__MessageTurtleCommands_Feedback__Sequence
{
  example_interfaces__action__MessageTurtleCommands_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__MessageTurtleCommands_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "example_interfaces/action/detail/message_turtle_commands__struct.h"

/// Struct defined in action/MessageTurtleCommands in the package example_interfaces.
typedef struct example_interfaces__action__MessageTurtleCommands_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  example_interfaces__action__MessageTurtleCommands_Goal goal;
} example_interfaces__action__MessageTurtleCommands_SendGoal_Request;

// Struct for a sequence of example_interfaces__action__MessageTurtleCommands_SendGoal_Request.
typedef struct example_interfaces__action__MessageTurtleCommands_SendGoal_Request__Sequence
{
  example_interfaces__action__MessageTurtleCommands_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__MessageTurtleCommands_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MessageTurtleCommands in the package example_interfaces.
typedef struct example_interfaces__action__MessageTurtleCommands_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} example_interfaces__action__MessageTurtleCommands_SendGoal_Response;

// Struct for a sequence of example_interfaces__action__MessageTurtleCommands_SendGoal_Response.
typedef struct example_interfaces__action__MessageTurtleCommands_SendGoal_Response__Sequence
{
  example_interfaces__action__MessageTurtleCommands_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__MessageTurtleCommands_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MessageTurtleCommands in the package example_interfaces.
typedef struct example_interfaces__action__MessageTurtleCommands_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} example_interfaces__action__MessageTurtleCommands_GetResult_Request;

// Struct for a sequence of example_interfaces__action__MessageTurtleCommands_GetResult_Request.
typedef struct example_interfaces__action__MessageTurtleCommands_GetResult_Request__Sequence
{
  example_interfaces__action__MessageTurtleCommands_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__MessageTurtleCommands_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__struct.h"

/// Struct defined in action/MessageTurtleCommands in the package example_interfaces.
typedef struct example_interfaces__action__MessageTurtleCommands_GetResult_Response
{
  int8_t status;
  example_interfaces__action__MessageTurtleCommands_Result result;
} example_interfaces__action__MessageTurtleCommands_GetResult_Response;

// Struct for a sequence of example_interfaces__action__MessageTurtleCommands_GetResult_Response.
typedef struct example_interfaces__action__MessageTurtleCommands_GetResult_Response__Sequence
{
  example_interfaces__action__MessageTurtleCommands_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__MessageTurtleCommands_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "example_interfaces/action/detail/message_turtle_commands__struct.h"

/// Struct defined in action/MessageTurtleCommands in the package example_interfaces.
typedef struct example_interfaces__action__MessageTurtleCommands_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  example_interfaces__action__MessageTurtleCommands_Feedback feedback;
} example_interfaces__action__MessageTurtleCommands_FeedbackMessage;

// Struct for a sequence of example_interfaces__action__MessageTurtleCommands_FeedbackMessage.
typedef struct example_interfaces__action__MessageTurtleCommands_FeedbackMessage__Sequence
{
  example_interfaces__action__MessageTurtleCommands_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__MessageTurtleCommands_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__STRUCT_H_
