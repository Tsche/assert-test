cmake_minimum_required(VERSION 3.22)
project(my_project)

include(FetchContent)
FetchContent_Declare(
    libassert
    GIT_REPOSITORY "https://github.com/jeremy-rifkin/libassert"
    GIT_TAG "v1.1"
)
FetchContent_MakeAvailable(libassert)

add_executable(foo main.cpp)
target_link_libraries(foo
    PRIVATE
        assert
)

IF (WIN32)
target_link_libraries(foo PRIVATE dbghelp)
ELSE()
target_link_libraries(foo PRIVATE dl)
ENDIF()