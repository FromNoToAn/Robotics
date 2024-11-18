# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_need_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED need_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(need_FOUND FALSE)
  elseif(NOT need_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(need_FOUND FALSE)
  endif()
  return()
endif()
set(_need_CONFIG_INCLUDED TRUE)

# output package information
if(NOT need_FIND_QUIETLY)
  message(STATUS "Found need: 0.0.0 (${need_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'need' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${need_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(need_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${need_DIR}/${_extra}")
endforeach()
