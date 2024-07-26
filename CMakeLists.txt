cmake_minimum_required(VERSION 3.27)

project(ral LANGUAGES CXX)

# please keep this layout for version setting, used by the automatic tagging
# script
set(PACKAGE_VERSION_MAJOR 0)
set(PACKAGE_VERSION_MINOR 0)
set(PACKAGE_VERSION_PATCH 1)

set(PACKAGE_VERSION
    "${PACKAGE_VERSION_MAJOR}.${PACKAGE_VERSION_MINOR}.${PACKAGE_VERSION_PATCH}"
)

# --- Set a better default for installation directory---------------------------
if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX
      "${CMAKE_CURRENT_LIST_DIR}/install"
      CACHE PATH "default install path" FORCE)
endif()

# --- RPATH settings -----------------------------------------------------------
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH
    TRUE
    CACHE BOOL "RPATH USE LINK PATH")

# Use GNU-style hierarchy for installing build products
include(GNUInstallDirs)

# Offer the user the choice of overriding the installation directories
set(INSTALL_LIB_DIR
    lib
    CACHE PATH "Installation directory for libraries")
set(INSTALL_BIN_DIR
    bin
    CACHE PATH "Installation directory for executables")
set(INSTALL_INCLUDE_DIR
    include
    CACHE PATH "Installation directory for header files")

# Set up C++ Standard ``-DCMAKE_CXX_STANDARD=<standard>`` when invoking CMake
set(CMAKE_CXX_STANDARD
    20
    CACHE STRING "")

if(NOT CMAKE_CXX_STANDARD MATCHES "20")
  message(FATAL_ERROR "Unsupported C++ standard: ${CMAKE_CXX_STANDARD}")
endif()

# Exporting compile commands for linter
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

# dependencies are declared like this
find_package(
  ROOT
  COMPONENTS ROOTVecOps
  REQUIRED)
find_package(EDM4HEP REQUIRED) # includes also podio

# Defining the target
file(GLOB sources src/*.cc)
file(
  GLOB headers
  RELATIVE ${CMAKE_CURRENT_LIST_DIR}
  "include/${PROJECT_NAME}/*.h")
list(FILTER headers EXCLUDE REGEX "LinkDef.h")

message(STATUS "ral sources:\n   ${sources}")
message(STATUS "ral headers:\n   ${headers}")

add_library("${PROJECT_NAME}" SHARED ${sources} ${headers})

target_link_libraries(
  "${PROJECT_NAME}" PUBLIC ROOT::Physics ROOT::MathCore ROOT::ROOTVecOps
                           EDM4HEP::edm4hep EDM4HEP::edm4hepDict podio::podio)

target_include_directories(
  "${PROJECT_NAME}" PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
                           $<INSTALL_INTERFACE:include>)

# Testing

include(CTest)
enable_testing()

add_subdirectory(test)

# Installation policies

root_generate_dictionary(
  "${PROJECT_NAME}_dict" ${headers} MODULE "${PROJECT_NAME}" LINKDEF
  "include/${PROJECT_NAME}/LinkDef.h")

install(
  TARGETS "${PROJECT_NAME}"
  EXPORT "${PROJECT_NAME}Targets"
  RUNTIME DESTINATION "${INSTALL_BIN_DIR}" COMPONENT bin
  LIBRARY DESTINATION "${INSTALL_LIB_DIR}" COMPONENT shlib
  PUBLIC_HEADER DESTINATION "${INSTALL_INCLUDE_DIR}/${PROJECT_NAME}"
                COMPONENT dev)

install(
  FILES "${PROJECT_BINARY_DIR}/lib${PROJECT_NAME}.rootmap"
  DESTINATION "${INSTALL_LIB_DIR}"
  COMPONENT dev)

install(
  FILES "${PROJECT_BINARY_DIR}/lib${PROJECT_NAME}_rdict.pcm"
  DESTINATION "${INSTALL_LIB_DIR}"
  COMPONENT dev)

# Generate documentation

find_package(Doxygen)
if(DOXYGEN_FOUND)
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/doc/Doxyfile.in
                 ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/doc/DoxygenLayout.xml
                 ${CMAKE_CURRENT_BINARY_DIR}/DoxygenLayout.xml COPYONLY)
  add_custom_target(
    doc
    ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Generating API documentation with Doxygen"
    VERBATIM)

  install(
    DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/doxygen
    DESTINATION ${CMAKE_INSTALL_DOCDIR}/doxygen
    OPTIONAL)

endif()
