add_executable(blue-hawaii main.cpp)
add_dependencies(blue-hawaii JsonBox_LIB)
target_link_libraries(blue-hawaii JsonBox)
