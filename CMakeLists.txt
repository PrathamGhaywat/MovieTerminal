cmake_minimum_required(VERSION 3.10)
project(MovieTerminal)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(MovieTerminal src/main.cpp)
target_link_libraries(MovieTerminal ${OpenCV_LIBS})