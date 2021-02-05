add_library(MathFunctions SHARED fastpow.cxx)

# set as interface, linking this lib will automatically add include headers, but this lib itself will not
target_include_directories(MathFunctions INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
