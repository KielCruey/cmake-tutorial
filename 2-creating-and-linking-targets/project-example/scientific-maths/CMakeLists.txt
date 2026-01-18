# creating an empty target named "Scientific-Maths"
add_library(Scientific-Maths)

# adding associated files to target
# add scoped sources (scientific-maths.cpp and scientific-maths.hpp) to a target called "Scientific-Maths"
target_sources(Scientific-Maths
  PRIVATE scientific-maths.cpp
  PUBLIC 
    FILE_SET HEADERS
    BASE_DIRS .
    FILES scientific-maths.hpp
)