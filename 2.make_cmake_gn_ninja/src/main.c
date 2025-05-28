// main.c

#include <stdio.h>
#include "function.h"

#define ACTION_1 12+1
#define ACTION_2 (12+1)


int main(void)
{
	// 测试函数
	my_function(ACTION_1);
	my_function(ACTION_2);
	for (int i = 0; i < 3 ; i++) {
		printf("[INFO] ACTION: %d\r\n", ACTION_2 * i);
	}
#ifdef DEBUG
	printf("[DEBUG] ACTION_1:%d ACTION_2:%d\r\n", ACTION_1, ACTION_2);
#endif
	return 0;
}
