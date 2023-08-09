cmake_minimum_required(VERSION 3.26.1)

project("ConsoleToDoList")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/ToDoList)

target_link_libraries(TO_DO_LIST_SRC)