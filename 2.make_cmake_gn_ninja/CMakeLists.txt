# 指定Cmake的最底版本需求要求
cmake_minimum_required(VERSION 3.22)

# 指定项目名称和变成语言
project(main)

# 修改内置变量，以达到修改输出目录的效果
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/out)

# 添加可执行文件
add_executable(main src/main.c src/function.c)

# 添加头文件搜索目录
include_directories(${PROJECT_SOURCE_DIR}/include)

