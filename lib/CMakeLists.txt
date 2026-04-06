cmake_minimum_required(VERSION 4.3.1)

project(
  archimedes
  VERSION 0.0.1
  DESCRIPTION "Framework behind tools of the Archimedes collection."
  LANGUAGES C)

add_library(archimedes)

target_sources(
  archimedes
  PRIVATE src/api.c
  PUBLIC FILE_SET HEADERS BASE_DIRS include FILES include/archimedes/api.h)

target_include_directories(
  archimedes PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

target_compile_features(archimedes PUBLIC c_std_11)

add_library(archimedes::archimedes ALIAS archimedes)

enable_testing()

add_subdirectory(tests)
