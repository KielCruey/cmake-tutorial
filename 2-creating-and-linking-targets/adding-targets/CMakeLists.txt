# creating an empty target
add_executable(myProgram) 

# adding source files with scope to target (executable)
target_sources(myProgram PRIVATE math.cpp logs.cpp)