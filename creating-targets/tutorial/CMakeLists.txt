add_executable(Tutorial)

target_sources(Tutorial PRIVATE program.cpp)

target_link_libraries(Tutorial PRIVATE Maths)