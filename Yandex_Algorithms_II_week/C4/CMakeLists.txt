project(C4)

add_executable(C4 main.cc)

install(TARGETS C4 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})