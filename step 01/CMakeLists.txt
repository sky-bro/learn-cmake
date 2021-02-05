cmake_minimum_required(VERSION 3.0)

project(Tutorial VERSION 1.1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# let cmake generate a config.h by replacing strings in config.h.in (the version numbers)
configure_file(config.h.in config.h)

# Upper, lower, and mixed case commands are supported by CMake
add_eXecutable(step01 step01.cxx)

# headers in the source directory are aotomatically included, like test.h
# but the config.h will be generated into the binary folder (build/)
# so add this include directory
target_include_directories(step01 PUBLIC ${PROJECT_BINARY_DIR})


#====== build & run ==========
# mkdir build
# cd build
# cmake ..
# cmake --build . # Error: could not load cache
# or just use make
# ./step01
