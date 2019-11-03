cmake_minimum_required(VERSION 3.11)

project(ktxparse)

# Library target
add_library(ktxparse INTERFACE)
target_include_directories(ktxparse INTERFACE "include")
target_compile_features(ktxparse INTERFACE cxx_std_11)

# Top-level build
if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
	add_subdirectory("extern/catch2")
	add_subdirectory("extern/ktxtest")
	add_subdirectory("test")
endif ()
