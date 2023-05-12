cmake_minimum_required(VERSION 3.6)
project(sqlite)

enable_language(C CXX)
set(COMM_FLAGS_ "-Wall -g")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMM_FLAGS_}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMM_FLAGS_} -std=c++14")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC -pthread")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -pthread")
if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-unknown-pragmas -Wno-pragmas -Wno-deprecated -Wno-unused-variable")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unknown-pragmas -Wno-pragmas -Wno-deprecated -Wno-unused-variable -fpermissive")
endif ()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/wcdb/tools/version)

include_directories(${CMAKE_CURRENT_BINARY_DIR}/wcdb/tools/version/export_headers/WCDB)

link_directories(${CMAKE_CURRENT_BINARY_DIR}/wcdb/tools/version)

add_executable(demo src/main.cpp src/Sample.cpp)

target_link_libraries(demo WCDB dl)

