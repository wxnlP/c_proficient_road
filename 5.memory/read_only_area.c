#include <stdio.h>

void function(void)
{
    printf("[FUNC] function call.\r\n");
}

int main(void)
{
    // 代码区地址
	int *ptr = (int *)function;
    printf("[INFO] %p\n", ptr);
	// 字符串常量的地址
	printf("[INFO] %p\n", "hello");
	// 字符串常量
	printf("[INFO] %s\n", "hello");
	// 尝试修改字符串常量
	char *p_str = "hallo"; // 替换为 const char *p_str = "hallo" 可在编译阶段指出错误
	p_str[1] = 'e'; // 抛出错误

    return 0;
}

