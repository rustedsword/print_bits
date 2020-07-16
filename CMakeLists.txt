cmake_minimum_required(VERSION 3.14)

project(print_bits LANGUAGES C)

if(NOT DEFINED IN_TREE_BUILD)
    set(IN_TREE_BUILD 1)
endif()

#Set IN_TREE_BUILD to 0 to search for dependencies in the system
if(IN_TREE_BUILD)
    add_subdirectory(deps/poor_base EXCLUDE_FROM_ALL)
else()
    find_package(poor_base)
endif()

add_executable(print_bits main.c)

target_link_libraries(print_bits LINK_PRIVATE poor_base)

set(CMAKE_SKIP_INSTALL_ALL_DEPENDENCY true)
install(TARGETS print_bits)
