cmake_minimum_required(VERSION 3.0)

project(Tutorial VERSION 1.3)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


option(USE_MYMATH "Use my math functions" ON)

configure_file(config.h.in config.h)


if(USE_MYMATH)
    add_subdirectory(MathFunctions)
    list(APPEND EXTRA_LIBS MathFunctions)
    # no need to include here
    # list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/MathFunctions") # MathFunctions.h
endif(USE_MYMATH)

add_executable(step03 step03.cxx)

target_link_libraries(step03 PUBLIC ${EXTRA_LIBS})

target_include_directories(step03 PUBLIC
                            ${PROJECT_BINARY_DIR} # config.h
)


#====== build & run ==========
# mkdir build
# cd build
# cmake -DUSE_MYMATH=OFF .. or ccmake ..
# make
# ./step02
