# establishes the minimum CMake version (4.2) this script depends on
# and will throw an fatal error otherwise
cmake_minimum_required(VERSION 4.2 FATAL_ERROR)

# names c++ as the project's language as well as naming the project "Tutorial"
project(Tutorial LANGUAGES CXX)

# creating a directory structure in the build folder
# it will create empty folders named "Tutorial", "Maths", and "Scientific-Maths"
add_subdirectory(Tutorial)
add_subdirectory(Maths)
add_subdirectory(Scientific-Maths)