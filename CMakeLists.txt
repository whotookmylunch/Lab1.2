cmake_minimum_required(VERSION 3.6)
project(_PrintEdition)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp PrintEdition.cpp PrintEdition.h)
add_executable(_PrintEdition ${SOURCE_FILES})