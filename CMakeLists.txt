cmake_minimum_required(VERSION 3.8)
include(FeatureSummary)
 
project(LibCommuni VERSION 3.6.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Core Network)

set(LibCommuni_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include/")
set(LibCommuni_SOURCE_DIR  "${CMAKE_SOURCE_DIR}/src/")

#include(pmm)
#pmm(CONAN REMOTES BINCRAFTERS)

add_subdirectory(src/core)
add_subdirectory(src/model)
add_subdirectory(src/util)


feature_summary(WHAT ALL)
