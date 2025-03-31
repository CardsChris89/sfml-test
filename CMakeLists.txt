cmake_minimum_required(VERSION 3.28)
project(SFMLProject LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(out src/main.cpp
        src/helpful.cpp
        src/player.cpp
        src/player.h
        src/weapon.cpp
        src/weapon.h)
target_compile_features(out PRIVATE cxx_std_17)
target_link_libraries(out PRIVATE SFML::Graphics SFML::Audio)
