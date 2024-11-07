cmake_minimum_required(VERSION 3.10)

project(gameProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

#adding source files and making executable
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(main ${SOURCES})

#specifying where to look for header files and libraries
target_include_directories(main PRIVATE include)
