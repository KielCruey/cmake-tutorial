# creating a target
add_library(Scientific-Maths)

# adding associated files to target
target_sources(Scientific-Maths
  PRIVATE scientific-maths.cpp
  PUBLIC 
    FILE_SET HEADERS
    BASE_DIRS .
    FILES scientific-maths.hpp
)