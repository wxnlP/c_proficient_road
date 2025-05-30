#include <stdio.h>

int a = 10;
int b;
const char *str = "hello world";

void function(void)
{
	static int e = 1;
	static int f;
	printf("[func] data reg: %p\n", &e);
	printf("[func] bbs reg: %p\n", &f);
}

int main(void)
{
	static int c = 2;
	static int d;
    // 代码区地址
	int *ptr = (int *)function;
    printf("[INFO] code area: %p\n", ptr);
	// 字符串常量的地址
	printf("[INFO] read only area: %p\n", str);
	// data段
	printf("[INFO] data seg: %p\n", &a);
	printf("[INFO] data seg: %p\n", &c);
	// bbs段地址
	printf("[INFO] bbs seg: %p\n", &b);
	printf("[INFO] bbs seg: %p\n", &d);
	// 函数中的静态变量
	function();
	
    return 0;
}
