#include <stdio.h>

int main(void)
{
    char *arr[] = { "hello", "world", "linux" };
    char **p = arr;

    printf("[INFO] %s:%p\n", p[0], p[0]);
    printf("[INFO] %s:%p\n", p[1], p[1]);
    printf("[INFO] %s:%p\n", p[2], p[2]);

    printf("[INFO] &p[0]:%p\n", &p[0]);
    printf("[INFO] &p[1]:%p\n", &p[1]);
    printf("[INFO] &p[2]:%p\n", &p[2]);

    printf("[INFO] &p[0]:%p\n", p);
    printf("[INFO] &p[1]:%p\n", p+1);
    printf("[INFO] &p[2]:%p\n", p+2);
    return 0;
}


