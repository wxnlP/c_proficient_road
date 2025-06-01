#include <stdio.h>

void func_1(char *p)
{
    printf("[INFO] %s\n", p);
    p = "hello linux";
}

void func_2(char **p)
{
    printf("[INFO] %s\n", *p);
    *p = "hello linux";
}

int main(void)
{
    char *p1 = "hello world";
    func_1(p1);
    printf("[INFO] %s\n", p1);
    func_2(&p1);
    printf("[INFO] %s\n", p1);

    return 0;
}


