cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS
  # "-std=c++14 -Wall -g -fPIC -O2 -march=native -ffast-math")
  "-std=c++14 -Wall -g -fPIC -O2")
set(CMAKE_CXX_COMPILER "clang++")

project(benchmark CXX)
find_package(Armadillo 6.0 REQUIRED)
find_package(BLAS REQUIRED)
find_package(LAPACK REQUIRED)
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

if(ARMADILLO_FOUND)
  message("armadillo found")
  include_directories(${ARMADILLO_INCLUDE_DIRS})
else()
  message(FATAL_ERROR "Cannot find Armadillo")
endif()

include_directories(${CMAKE_SOURCE_DIR}/include)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
add_subdirectory(src)
