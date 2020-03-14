cmake_minimum_required(VERSION 3.9)

project(glm)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_definitions(--std=c++11)
set(TEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/test)
add_executable(glm ${TEST_DIR}/main.cpp)
target_link_libraries(glm glmath)
