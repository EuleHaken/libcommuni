cmake_minimum_required(VERSION 3.8)

project(LibCommuni VERSION 3.6.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Core Network)

set(LibCommuni_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include/")
set(LibCommuni_SOURCE_DIR  "${CMAKE_SOURCE_DIR}/src/")

set(LibCommuni_definitions "IRC_STATIC IRC_NAMESPACE=Communi")

add_subdirectory(src/core)
add_subdirectory(src/model)
add_subdirectory(src/util)


if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    include(FeatureSummary)
    feature_summary(WHAT ALL)
endif ()
