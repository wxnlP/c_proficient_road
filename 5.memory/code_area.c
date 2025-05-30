#include <stdio.h>

void function(void)
{
	printf("[FUNC] function call.\r\n");
}

// 声明一个函数指针，并指向function函数
void (*func_ptr)(void) = function;

int main(void)
{
	// 访问函数
	func_ptr();
		
	int *ptr = (int *)function; // 将函数入口地址强制转换为int*指针
	// 读
	printf("[INFO] %p.\n", ptr);
	printf("[INFO] %d.\n", *ptr);

	// 写
	*ptr = 0xFF;

	return 0;
}


