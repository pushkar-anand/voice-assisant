cmake_minimum_required(VERSION 3.9)
project(Voice-Assistant)

set(CMAKE_CXX_STANDARD 11)

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

add_executable(Voice-Assistant main.cpp cpp-headers/assistant.h cpp-headers/audio_functions.h cpp-headers/parser.h replies/replies.h cpp-headers/helper_functions.h cpp-headers/json.hpp replies/replies_arrays.h)

target_link_libraries(Voice-Assistant ${PYTHON_LIBRARIES})