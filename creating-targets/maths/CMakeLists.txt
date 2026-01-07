# creating a target
add_library(Maths)

# adding associated files to target
target_sources(Maths
  PRIVATE maths.cpp
  PUBLIC
    FILE_SET HEADERS
    BASE_DIRS .
    FILES maths.hpp
)