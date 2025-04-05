cmake_minimum_required(VERSION 3.18)
project(cmake_test)

add_executable(cmaketest)
target_sources(cmaketest PRIVATE main.cpp f.cpp f.h)
target_compile_features(cmaketest PUBLIC cxx_std_17)
