project(C3)

add_executable(C3 main.cc)

install(TARGETS C3 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})