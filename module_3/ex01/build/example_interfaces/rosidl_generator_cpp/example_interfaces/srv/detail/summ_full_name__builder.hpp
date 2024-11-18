// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:srv/SummFullName.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "example_interfaces/srv/detail/summ_full_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace example_interfaces
{

namespace srv
{

namespace builder
{

class Init_SummFullName_Request_first_name
{
public:
  explicit Init_SummFullName_Request_first_name(::example_interfaces::srv::SummFullName_Request & msg)
  : msg_(msg)
  {}
  ::example_interfaces::srv::SummFullName_Request first_name(::example_interfaces::srv::SummFullName_Request::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::srv::SummFullName_Request msg_;
};

class Init_SummFullName_Request_name
{
public:
  explicit Init_SummFullName_Request_name(::example_interfaces::srv::SummFullName_Request & msg)
  : msg_(msg)
  {}
  Init_SummFullName_Request_first_name name(::example_interfaces::srv::SummFullName_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SummFullName_Request_first_name(msg_);
  }

private:
  ::example_interfaces::srv::SummFullName_Request msg_;
};

class Init_SummFullName_Request_last_name
{
public:
  Init_SummFullName_Request_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SummFullName_Request_name last_name(::example_interfaces::srv::SummFullName_Request::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_SummFullName_Request_name(msg_);
  }

private:
  ::example_interfaces::srv::SummFullName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::srv::SummFullName_Request>()
{
  return example_interfaces::srv::builder::Init_SummFullName_Request_last_name();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace srv
{

namespace builder
{

class Init_SummFullName_Response_full_name
{
public:
  Init_SummFullName_Response_full_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::srv::SummFullName_Response full_name(::example_interfaces::srv::SummFullName_Response::_full_name_type arg)
  {
    msg_.full_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::srv::SummFullName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::srv::SummFullName_Response>()
{
  return example_interfaces::srv::builder::Init_SummFullName_Response_full_name();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_
