cmake_minimum_required(VERSION 3.4)

project(catchsample)

set (CMAKE_CXX_STANDARD 11)
find_package(Catch2 REQUIRED)
if (Catch2_FOUND)
  get_target_property(CID Catch2::Catch2 INTERFACE_INCLUDE_DIRECTORIES)
  message(STATUS "Catch2 header files: ${CID} ")
endif (Catch2_FOUND)

enable_testing()

add_subdirectory(tests)
