cmake_minimum_required(VERSION 3.18)
project(copilot_test)

add_executable(copilottest)
target_sources(copilottest PRIVATE main.cpp f.cpp f.h)
target_compile_features(copilottest PUBLIC cxx_std_17)
