cmake_minimum_required (VERSION 3.12)

project(ComputerPlayer)


set(CMAKE_CXX_STANDARD 17)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)




add_executable(ComputerPlayer source/main.cpp  

)


# Add tests
add_subdirectory(tests)

