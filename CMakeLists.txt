cmake_minimum_required(VERSION 3.8)
project(xyModuleExample)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${xyModuleExample_SOURCE_DIR}/cmake")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${xyModuleExample_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${xyModuleExample_SOURCE_DIR}/lib)

find_package(Squirrel REQUIRED)

set(SOURCE_FILES library.cpp library.h sqmodule.h)

add_library(xyModuleExample SHARED ${SOURCE_FILES})