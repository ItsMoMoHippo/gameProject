cmake_minimum_required(VERSION 3.10)

# Setting up C++ standard
project(gameProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# Adding source files and making executable
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(main ${SOURCES} )  # Add glad.c directly to the executable

# Specifying where to look for header files and libraries
target_include_directories(main PRIVATE include)
