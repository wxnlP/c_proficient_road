# 定义工程目录
SRC_DIR := src
INCLUDE_DIR := include
OBJ_DIR := build
BIN_DIR := out

# 包含头文件路径，启动编译警告，生成调试信息
CFLAGS = -I$(INCLUDE_DIR) -Wall -g

# 可执行文件
TARGET = $(BIN_DIR)/main

# 获取src目录下所有.c文件列表
SOURCES = $(wildcard $(SRC_DIR)/*.c)
# 将.c路径替换为.o路径
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SOURCES))

# 默认目标
all : $(TARGET)

# 编写编译规则
$(TARGET) : $(OBJS)
	gcc $^ -o $@ 

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	gcc $< -o $@ -c $(CFLAGS)

# 清理规则
.PHONY: clean
clean :
	rm -rf $(OBJ_DIR)/*.o $(BIN_DIR)/main
	
