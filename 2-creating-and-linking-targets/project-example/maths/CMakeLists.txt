# creating a target empty target named "Maths"
add_library(Maths)

# adding associated files to target
# add scoped sources (maths.cpp and maths.hpp) to a target called "Maths"
target_sources(Maths
  PRIVATE maths.cpp
  PUBLIC
    FILE_SET HEADERS
    BASE_DIRS .
    FILES maths.hpp
)