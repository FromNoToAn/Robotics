// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from example_interfaces:srv/SummFullName.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__example_interfaces__srv__SummFullName_Request __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__srv__SummFullName_Request __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SummFullName_Request_
{
  using Type = SummFullName_Request_<ContainerAllocator>;

  explicit SummFullName_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->last_name = "";
      this->name = "";
      this->first_name = "";
    }
  }

  explicit SummFullName_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : last_name(_alloc),
    name(_alloc),
    first_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->last_name = "";
      this->name = "";
      this->first_name = "";
    }
  }

  // field types and members
  using _last_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_name_type last_name;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _first_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _first_name_type first_name;

  // setters for named parameter idiom
  Type & set__last_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_name = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__first_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->first_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::srv::SummFullName_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::srv::SummFullName_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::srv::SummFullName_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::srv::SummFullName_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SummFullName_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SummFullName_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SummFullName_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SummFullName_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::srv::SummFullName_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::srv::SummFullName_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__srv__SummFullName_Request
    std::shared_ptr<example_interfaces::srv::SummFullName_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__srv__SummFullName_Request
    std::shared_ptr<example_interfaces::srv::SummFullName_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SummFullName_Request_ & other) const
  {
    if (this->last_name != other.last_name) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->first_name != other.first_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SummFullName_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SummFullName_Request_

// alias to use template instance with default allocator
using SummFullName_Request =
  example_interfaces::srv::SummFullName_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace example_interfaces


#ifndef _WIN32
# define DEPRECATED__example_interfaces__srv__SummFullName_Response __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__srv__SummFullName_Response __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SummFullName_Response_
{
  using Type = SummFullName_Response_<ContainerAllocator>;

  explicit SummFullName_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->full_name = "";
    }
  }

  explicit SummFullName_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : full_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->full_name = "";
    }
  }

  // field types and members
  using _full_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _full_name_type full_name;

  // setters for named parameter idiom
  Type & set__full_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->full_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::srv::SummFullName_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::srv::SummFullName_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::srv::SummFullName_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::srv::SummFullName_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SummFullName_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SummFullName_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SummFullName_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SummFullName_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::srv::SummFullName_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::srv::SummFullName_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__srv__SummFullName_Response
    std::shared_ptr<example_interfaces::srv::SummFullName_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__srv__SummFullName_Response
    std::shared_ptr<example_interfaces::srv::SummFullName_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SummFullName_Response_ & other) const
  {
    if (this->full_name != other.full_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SummFullName_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SummFullName_Response_

// alias to use template instance with default allocator
using SummFullName_Response =
  example_interfaces::srv::SummFullName_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace example_interfaces

namespace example_interfaces
{

namespace srv
{

struct SummFullName
{
  using Request = example_interfaces::srv::SummFullName_Request;
  using Response = example_interfaces::srv::SummFullName_Response;
};

}  // namespace srv

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_HPP_
