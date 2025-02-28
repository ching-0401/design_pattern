
add_executable(test_singleton)
target_sources(test_singleton PRIVATE test.cpp singleton.h singleton.cpp)
target_link_libraries(test_singleton PRIVATE doctest::doctest)