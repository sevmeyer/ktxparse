cmake_minimum_required(VERSION 3.11)

# Include OpenGL to compare against real constants
find_package(OpenGL REQUIRED)

# Test executable
add_executable(ktxparse-test
	"main.cpp"
	"helpers.cpp"
	"invalid_header.cpp"
	"invalid_metadata.cpp"
	"invalid_pixeldata.cpp"
	"valid_composition.cpp"
	"valid_compression.cpp"
	"valid_format.cpp"
	"valid_metadata.cpp"
	"valid_size.cpp")
target_include_directories(ktxparse-test PRIVATE ${OPENGL_INCLUDE_DIR})
target_link_libraries(ktxparse-test PRIVATE ktxparse catch2 ${OPENGL_LIBRARIES})

# Language properties
set_property(TARGET ktxparse-test PROPERTY CXX_STANDARD_REQUIRED TRUE)
set_property(TARGET ktxparse-test PROPERTY CXX_EXTENSIONS FALSE)

# Verbose compiler warnings
if(MSVC)
	target_compile_options(ktxparse-test PRIVATE /W4 /WX)
else()
	target_compile_options(ktxparse-test PRIVATE -Wall -Wextra -Werror -pedantic)
endif()
