# Finding Catch2 package
find_package(Catch2 3 REQUIRED)

# Defining the test executable
set(UNITTEST_NAME unnitest)
add_executable("${UNITTEST_NAME}" ReconstructedParticle.cpp)
target_link_libraries("${UNITTEST_NAME}" PRIVATE Catch2::Catch2WithMain
                                                 "${PROJECT_NAME}")
target_include_directories(
  "${UNITTEST_NAME}" PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
                            $<INSTALL_INTERFACE:include>)

# Defining test command
add_test(NAME "${UNITTEST_NAME}" COMMAND "${UNITTEST_NAME}")
