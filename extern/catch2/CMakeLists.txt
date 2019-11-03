cmake_minimum_required(VERSION 3.11)
include(FetchContent)

# Target:  catch2
# Include: catch2/catch.hpp
# License: Boost Software License 1.0

# Declaration
FetchContent_Declare(catch2
	URL "https://github.com/catchorg/Catch2/releases/download/v2.8.0/catch.hpp"
	URL_HASH SHA256=2791047e459b981a1035f4ee16a2ad031f5bfb4ba66487ad4d3fc816c8946f61
	DOWNLOAD_DIR "${CMAKE_CURRENT_BINARY_DIR}/catch2"
	DOWNLOAD_NO_EXTRACT TRUE)

# Download
FetchContent_GetProperties(catch2)
if(NOT catch2_POPULATED)
	message(STATUS "Fetching external library: catch2")
	FetchContent_Populate(catch2)
endif()

# Target
add_library(catch2 INTERFACE)
target_include_directories(catch2 SYSTEM INTERFACE "${CMAKE_CURRENT_BINARY_DIR}")
