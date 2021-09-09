project(B4)

add_executable(B4 main.cc)

install(TARGETS B4 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})