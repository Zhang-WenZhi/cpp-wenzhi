
# #指定 cmake最小版本要求为3.0
cmake_minimum_required(VERSION 3.0)
# #指定项目名称，习惯用大写指定项目名称
project(CPPWENZHI VERSION 1.0)
# 设置指定的C++编译器版本是必须的，如果不设置，或者为OFF，则指定版本不可用时，会使用上一版本。
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 指定为C++11 版本
set(CMAKE_CXX_STANDARD 11)

#等价于g++ main.cpp src/MinimumWhiteTiles2209H.cpp -Iinclude -o  main中的-Iinclude头文件搜索路径
include_directories(include)

#等价于g++  main.cpp -o main；main_cmake帮助区分以前生成的main
#第一个参数指定生成可执行文件名称main_cmake，第二参数要编译的源文件main.cpp
# add_executable(main_cmake main.cpp)

#等价于g++ main.cpp src/MinimumWhiteTiles2209H.cpp -Iinclude -o  main_cmake
add_executable(main_cmake main.cpp src/MinimumWhiteTiles2209H.cpp)

