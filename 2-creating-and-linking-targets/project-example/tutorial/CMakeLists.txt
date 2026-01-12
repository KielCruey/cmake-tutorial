# creating an executable target
add_executable(Tutorial)

# adding files to executable
target_sources(Tutorial PRIVATE program.cpp)

# connecting used libraries to main program
target_link_libraries(Tutorial PUBLIC Maths PRIVATE Scientific-Maths)