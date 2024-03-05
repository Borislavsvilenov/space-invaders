cmake_minimum_required(VERSION 3.27)
project(Space_Invaders VERSION 0.1.0 LANGUAGES C CXX)

find_package(raylib REQUIRED)

include_directories(engine Objects)

include(CTest)
enable_testing()

add_executable(Space_Invaders main.cpp engine/Game.cpp engine/Game.hpp engine/Player.hpp engine/Player.cpp)
target_link_libraries(Space_Invaders PRIVATE raylib)
target_compile_features(Space_Invaders PRIVATE cxx_std_11)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
