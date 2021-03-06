
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf
#http://pageant.ghulbus.eu/?p=664
#http://cmake.org/Wiki/CMake/Testing_With_CTest#Simple_Testing
#http://stackoverflow.com/questions/733475/cmake-ctest-make-test-doesnt-build-tests

cmake_minimum_required(VERSION 3.6)

project (remotes)

# The version number.
set (remotes_VERSION_MAJOR 1)
set (remotes_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/remotes_config.h.in"
  "${PROJECT_BINARY_DIR}/remotes_config.h"
)

# add the binary tree to the search path for include files
# so that we will find remotes_config.h
include_directories("${PROJECT_BINARY_DIR}")

#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}")
#include(../../check11features/CheckCXX11Features.cmake)

# GCC specifics
if(CMAKE_COMPILER_IS_GNUCXX)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall -std=c++0x")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -ggdb")
endif()
# Visual Studio specifics
if(MSVC)
  # Warning Level 4 for Debug builds
  list(APPEND CMAKE_CXX_FLAGS_DEBUG " /W4")
  list(REMOVE_DUPLICATES CMAKE_CXX_FLAGS_DEBUG)
  set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT testremotes)
endif()

# should we use our own utils functions?
option (USE_UTILS
  "Use my own utils implementation" ON)

add_subdirectory(driver)
add_subdirectory(lib)

# CTest
enable_testing ()
# does the application run
add_test (RmotesRuns driver/testremotes)

# CPack
# build a CPack driven installer package
include (InstallRequiredSystemLibraries)
set (CPACK_RESOURCE_FILE_LICENSE  
     "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set (CPACK_PACKAGE_VERSION_MAJOR "${remotes_VERSION_MAJOR}")
set (CPACK_PACKAGE_VERSION_MINOR "${remotes_VERSION_MINOR}")
include (CPack)

