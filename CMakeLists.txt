#版本要求
cmake_minimum_required(VERSION 3.13)
#设置工程名
project(lmrframe)
#设置版本号：主版本号.子版本号.补丁号
set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_PATCH 0)

#设置 C++ 版本
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#打印信息
set(PROJ_NAME lmrframe)
message(STATUS "building: " ${PROJ_NAME})

#获取工程根目录
set(ROOT_DIR ${CMAKE_SOURCE_DIR})


set(INC ${ROOT_DIR}/inc)
set(INC_LIST ${INC})
#设置头文件包含路径
include_directories(${INC_LIST})

#获取目录下的所有文件
aux_source_directory(${ROOT_DIR}/src SRC)
#设置源文件
set(SRC_LIST ${SRC})

set(CMAKE_CFG ${ROOT_DIR}/build)
#根据 xxx.h.in 导出变量到 xxx.h
configure_file(${CMAKE_CFG}/version.h.in ${INC}/version.h)

#编译可执行文件
add_executable(lmrframe ${SRC_LIST})

target_include_directories(lmrframe PUBLIC "${PROJECT_BINARY_DIR}")

