#include <stdio.h>

#define FUNC_1(a, b) a*b
#define FUNC_2(a, b) (a*b)
#define FUNC_3(a, b) a = a * b; a++
#define FUNC_4(a, b) { a = a * b; a++; }
#define FUNC_5(a, b) do { a = a * b; a++; } while(0)

int main(void)
{
	int a = 10;
	// 1.期望值为100
	a = FUNC_1(9+1, 10);
	printf("[INFO] %d\r\n", a);

	// 2.期望值100
	a = 10;
	a = FUNC_2(a, 10);
	printf("[INFO] %d\r\n", a);

	// 3.期望值101
	a = 10;
	FUNC_3(a, 10);
	printf("[INFO] %d\r\n", a);

	// 4.期望值10
	a = 10;
	if (0)
		FUNC_3(a, 10);
	printf("[INFO] %d\r\n", a);

	// 5.期望值111
	if (0) 
		FUNC_4(a, 10);
	else
		FUNC_4(a, 11);
	printf("[INFO] %d\r\n", a);
	

	// 6.期望值111
	a = 10;
    if (0){	
        FUNC_4(a, 10);
	}
    else{
        FUNC_4(a, 11);
	}
    printf("[INFO] %d\r\n", a);

	// 7.期望值111
	a = 10;
	if (0)
        FUNC_5(a, 10);
    else
        FUNC_5(a, 11);
    printf("[INFO] %d\r\n", a);

	return 0;
}
