project(C1)

add_executable(C1 main.cpp)

install(TARGETS C1 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})