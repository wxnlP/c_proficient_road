#include <stdio.h>

void func(int **p, int *b)
{
    *p = b;
}

int main(void)
{
    int a = 10;
    int b = 23;
    printf("[INFO] %p %p\n", &a, &b);
    int *ptr = &a;
    printf("[INFO] %p\n", ptr);
    func(&ptr, &b);
    printf("[INFO] %p\n", ptr);
    return 0;
}
