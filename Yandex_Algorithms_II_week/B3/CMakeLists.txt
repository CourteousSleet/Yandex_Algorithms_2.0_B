project(B3)

add_executable(B3 main.cc)

install(TARGETS B3 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})