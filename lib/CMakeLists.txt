cmake_minimum_required(VERSION 4.3.1)

project(
  archimedes
  VERSION 0.0.0
  DESCRIPTION "Framework behind tools of the Archimedes collection."
  LANGUAGES C)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(archimedes)

target_sources(
  archimedes
  PRIVATE src/api.c
  PUBLIC FILE_SET HEADERS BASE_DIRS include FILES include/archimedes/api.h)

target_include_directories(
  archimedes PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

target_compile_features(archimedes PUBLIC c_std_11)

add_library(archimedes::archimedes ALIAS archimedes)

# Docs with Doxygen
option(BUILD_DOCUMENTATION "Build API documentation with Doxygen" OFF)

if(BUILD_DOCUMENTATION)
  find_package(Doxygen)

  if(NOT DOXYGEN_FOUND)
    message(FATAL_ERROR "Doxygen is required to build documentation")
  endif()

  set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile)
  set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

  configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)

  set(DOXYGEN_CONFIG_FILE ${DOXYGEN_OUT})

  doxygen_add_docs(
    docs ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/src
    COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif()

# Testing
enable_testing()

add_subdirectory(tests)
