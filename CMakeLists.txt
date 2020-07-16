cmake_minimum_required(VERSION 3.14)

project(print_bits LANGUAGES C)

if(IN_TREE_BUILD)
    add_subdirectory(deps/poor_base EXCLUDE_FROM_ALL)
else()
    find_package(poor_base)
endif()

add_executable(print_bits main.c)

target_link_libraries(print_bits LINK_PRIVATE poor_base)

set(CMAKE_SKIP_INSTALL_ALL_DEPENDENCY true)
install(TARGETS print_bits)
