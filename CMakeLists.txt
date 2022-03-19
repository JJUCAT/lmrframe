#cmake version required
cmake_minimum_required(VERSION 3.13)
#set project name
project(lmrframe)
#set project version：major.minor.patch
set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_PATCH 0)

#set C++ version
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#set flag
set(CMAKE_CXX_FLAGS -pthread)

#cmake log
set(PROJ_NAME lmrframe)
message(STATUS "building: " ${PROJ_NAME})

#get project root directory
set(ROOT_DIR ${CMAKE_SOURCE_DIR})


set(INC ${ROOT_DIR}/inc)
set(TEST_INC ${ROOT_DIR}/test/inc)
set(INC_LIST ${INC} ${TEST_INC})
#set include directories
include_directories(${INC_LIST})

#get files in directory
aux_source_directory(${ROOT_DIR}/src SRC)
#set source directories
set(SRC_LIST ${SRC})

set(MAIN ${ROOT_DIR}/main.cpp)

set(CMAKE_CFG ${ROOT_DIR}/cmakecfg)
#export xxx.h.in variable to xxx.h
configure_file(${CMAKE_CFG}/version.h.in ${INC}/version.h)

#get test files
aux_source_directory(${ROOT_DIR}/test/src TEST)
set(TEST_LIST ${TEST})

set(LMRFRAME ${SRC_LIST} ${MAIN})
#compile executable file lmrframe
add_executable(lmrframe ${LMRFRAME})

#compile executable file testlmrframe
add_executable(testlmrframe ${TEST_LIST} ${SRC_LIST})

target_include_directories(lmrframe PUBLIC "${PROJECT_BINARY_DIR}")

