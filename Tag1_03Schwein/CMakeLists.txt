cmake_minimum_required (VERSION 3.12)

project(Schwein)


set(CMAKE_CXX_STANDARD 17)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)




add_executable(Schwein
       
        source/Schwein.cpp
        source/Schwein.h
        "source/main.cpp")



# Add tests
add_subdirectory(tests)

