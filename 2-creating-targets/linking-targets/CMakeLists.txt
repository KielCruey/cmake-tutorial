# non-empty executable created
add_executable(myProgram math.cpp logs.cpp) 

# non-empty library created
add_library(myLib PRIVATE scientific-math.cpp) 

# connecting myLib library to executable as a dependency
target_link_libraries(myProgram PRIVATE myLib)