#include <stdio.h>
// malloc
#include <stdlib.h>

int a = 10;
int b;
const char *str = "hello world";

void function(void)
{
	// 申请一块int类型大小的内存
	int *heap_var = (int *)malloc(sizeof(int));
	// 申请失败判断
	if (heap_var == NULL) {
		return;
	}

	// 使用申请的内存空间
	*heap_var = 10;
	printf("[INFO] heap: %d %p\n", *heap_var, heap_var);

	// 释放内存
	free(heap_var);
}

int main(void)
{
    // 代码区地址
	int *ptr = (int *)function;
    printf("[INFO] code area: %p\n", ptr);
	// 字符串常量的地址
	printf("[INFO] read only area: %p\n", str);
	// data段
	printf("[INFO] data seg: %p\n", &a);
	// bbs段地址
	printf("[INFO] bbs seg: %p\n", &b);
	// 函数
	function();
	
    return 0;
}
