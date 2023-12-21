cmake_minimum_required(VERSION 3.17)
project(learnsfml)

set(CMAKE_CXX_STANDARD 14)

# Recherche de SFML
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

add_executable(learnsfml main.cpp)

# Liaison avec les bibliothèques SFML
target_link_libraries(learnsfml sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
