cmake_minimum_required(VERSION 3.6)

project(helloworld)

set(ANDROID_NATIVE_API_LEVEL "android-21")

include_directories ("${PROJECT_SOURCE_DIR}/static-library")
include_directories ("${PROJECT_SOURCE_DIR}/dynamic-library")

add_library(sisr SHARED ${PROJECT_SOURCE_DIR}/dynamic-library/standart-inverse-square-root.c)
add_library(fisr STATIC ${PROJECT_SOURCE_DIR}/static-library/fast-inverse-square-root.c)

SET( CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -fPIE -pie")
add_executable(helloworld helloworld.c)
target_link_libraries (helloworld fisr)
target_link_libraries (helloworld sisr)
