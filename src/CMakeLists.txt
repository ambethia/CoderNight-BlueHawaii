include_directories(${CMAKE_SOURCE_DIR}/ext/jsonxx)
link_directories(${CMAKE_BINARY_DIR}/ext/jsonxx)

add_executable(blue-hawaii main.cpp)
target_link_libraries(blue-hawaii jsonxx)
