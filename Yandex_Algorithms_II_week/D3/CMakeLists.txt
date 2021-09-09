project(D3)

add_executable(D3 main.cc)

install(TARGETS D3 RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})