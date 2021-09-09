project(E1)

add_executable(E1 main.cpp)

install(TARGETS E1 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})