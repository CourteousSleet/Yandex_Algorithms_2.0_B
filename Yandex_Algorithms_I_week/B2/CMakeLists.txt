project(B2)

add_executable(B2 main.cpp)

install(TARGETS B2 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})