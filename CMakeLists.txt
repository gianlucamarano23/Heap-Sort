cmake_minimum_required(VERSION 3.5)  # CMake version check
project(Heap-Sort)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES src/Heap.cpp src/main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(sample ${SOURCE_FILES})
