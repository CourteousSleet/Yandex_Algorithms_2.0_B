project(D1)

add_executable(D1 main.cpp)

install(TARGETS D1 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})