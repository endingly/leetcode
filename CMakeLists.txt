cmake_minimum_required(VERSION 3.27.0)

project(leetcode VERSION 0.1.0 LANGUAGES CXX C)

file(GLOB_RECURSE SRC "src/*.cpp")
add_library(${PROJECT_NAME}_lib ${SRC})
target_include_directories(${PROJECT_NAME}_lib PUBLIC include)

add_subdirectory(leetcode)