cmake_minimum_required(VERSION 3.16)
project(opencode-subs-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(opencodesubstool
    src/main.cpp
    src/accounts.cpp
    src/trials.cpp
)

target_include_directories(opencodesubstool PRIVATE include)

if(WIN32)
    target_link_libraries(opencodesubstool PRIVATE userenv)
endif()
