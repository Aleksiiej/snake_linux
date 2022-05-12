cmake_minimum_required(VERSION 3.11.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(PrimitiveSnake)

set(SRC_LIST
    main.cpp
    Board.cpp
    Player.cpp
)

add_executable(${PROJECT_NAME} ${SRC_LIST})