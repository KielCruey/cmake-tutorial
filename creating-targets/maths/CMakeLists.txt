add_library(Maths)

target_sources(Maths 
  PRIVATE
    maths.cpp

  PUBLIC
    FILE_SET HEADERS
    BASE_DIRS .
    FILES maths.hpp
)