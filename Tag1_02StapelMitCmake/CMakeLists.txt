cmake_minimum_required (VERSION 3.12)

project(Stapel)


set(CMAKE_CXX_STANDARD 17)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)




add_executable(Stapel
       
        source/stapel.cpp
        source/stapel.h
        source/StapelException.h
        "source/main.cpp")



# Add tests
add_subdirectory(tests)

