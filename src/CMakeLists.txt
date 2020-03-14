cmake_minimum_required(VERSION 3.9)

FILE(GLOB GLMATH_SRC *.cpp)

add_library(glmath ${GLMATH_SRC})
