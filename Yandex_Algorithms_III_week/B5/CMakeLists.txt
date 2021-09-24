project(B5)

add_executable(B5 main.cc)

install(TARGETS B5 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})
