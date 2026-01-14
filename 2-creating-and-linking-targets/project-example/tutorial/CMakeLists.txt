# creating an empty executable target
add_executable(Tutorial)

# adding files (program.cpp) to previously created executable called "Tutorial"
target_sources(Tutorial PRIVATE program.cpp)

# connecting other libraries created in other subdirectories to main program called "Tutorial"
target_link_libraries(Tutorial PUBLIC Maths PRIVATE Scientific-Maths)