cmake_minimum_required(VERSION 3.10)

project(pong)

add_executable(pong src/main.cpp src/console_window.cpp src/paddle.cpp src/timer.cpp src/game.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)