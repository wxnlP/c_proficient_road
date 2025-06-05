#include <stdio.h>

// 指针函数
int *func(int a)
{
    int *p;
    p = &a;
    return p;
}

int main(void)
{
    int num = 10;
    int *retval;
    retval = func(num);
    printf("[INFO] %d\n", *retval);
    return 0;
}
