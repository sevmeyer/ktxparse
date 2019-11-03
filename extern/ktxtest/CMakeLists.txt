cmake_minimum_required(VERSION 3.11)
include(FetchContent)

# Target:  ktxtest
# License: CC0

# Declaration
FetchContent_Declare(ktxtest
	GIT_REPOSITORY "https://github.com/sevmeyer/ktxtest.git"
	GIT_TAG "0.5.0"
	SOURCE_DIR "${CMAKE_BINARY_DIR}/ktxtest")

# Download
FetchContent_GetProperties(ktxtest)
if(NOT ktxtest_POPULATED)
	message(STATUS "Fetching external library: ktxtest")
	FetchContent_Populate(ktxtest)
endif()
