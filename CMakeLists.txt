cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 11)
project(example)
if(NOT MSVC)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${example_SOURCE_DIR})
endif()

link_directories(${GLFW_LIBDIR})
add_subdirectory(libraries)
add_executable(example "")
add_subdirectory(src)
add_subdirectory(include)
target_link_libraries(example PRIVATE madd)

if (MSVC)
	set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT example)
	set_target_properties(example PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")
else()
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -g -static-libgcc -static-libstdc++ -ggdb")
endif()
