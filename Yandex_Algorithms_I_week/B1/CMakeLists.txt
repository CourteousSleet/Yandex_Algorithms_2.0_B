project(B1)

add_executable(B1 main.cpp)

install(TARGETS B1 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})
