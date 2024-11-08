#set minimum cmake version required
cmake_minimum_required(VERSION 3.10)

#set up porject name and language
project(GameProject VERSION 1.0 LANGUAGES CXX)

#set c++ standards
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "src/*.cpp")

#add executable for project
add_executable(game ${SOURCES})

#include header files in include folder
target_include_directories(game PRIVATE include)

#link raylib and other req libraries
target_link_directories(game PRIVATE lib)
target_link_libraries(game raylib opengl32 gdi32 winmm)
