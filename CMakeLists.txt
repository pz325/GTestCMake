CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

add_subdirectory(gtest-1.6.0)

# ============= project TFoo ===========
project (TFoo)

set(GTEST_ROOT gtest-1.6.0)
include_directories(${GTEST_ROOT}/include)
include_directories(${PROJECT_SOURCE_DIR})

ADD_EXECUTABLE(TFoo test/TFoo.cpp ${GTEST_ROOT}/src/gtest_main.cc)
target_link_libraries(TFoo gtest gtest_main)