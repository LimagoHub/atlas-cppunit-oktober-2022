cmake_minimum_required (VERSION 3.12)

# Add dependencies
set( gtest_force_shared_crt ON CACHE BOOL "")
add_subdirectory(google)
set_target_properties(gtest PROPERTIES FOLDER Dependencies)
set_target_properties(gmock PROPERTIES FOLDER Dependencies)
set_target_properties(gtest_main PROPERTIES FOLDER Dependencies)
set_target_properties(gmock_main PROPERTIES FOLDER Dependencies)
set_target_properties(gmock_main gtest_main PROPERTIES EXCLUDE_FROM_ALL 1 EXCLUDE_FROM_DEFAULT_BUILD 1)

set(SOURCE
	main.cpp
	Mockpersonen_repository.h
	Mockblacklist_service.h
	personen_service_impl_test.h
	personen_service_impl_test.cpp )



# Create test executable
add_executable(PersonenServiceTest ${SOURCE} ${HEADER}  "Mockblacklist_service.h")

# Linking
target_link_libraries(PersonenServiceTest PRIVATE gtest gmock)

# Mark it as test executable for CMake
add_test(NAME PersonenServiceTest COMMAND PersonenServiceTest)

# Push it to tests
set_target_properties(PersonenServiceTest PROPERTIES FOLDER Tests)

# Build tests where other libraries reside
set_target_properties(PersonenServiceTest
	PROPERTIES
	ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIG>"
	LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIG>"
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIG>"
)
