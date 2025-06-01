#include <stdio.h>


typedef struct {
    int a;
    int b;
    char c;
} Struct_A;

int main(void)
{
    int a = 0x12345678;
    int b[] = { 10, 30, 20 };
    char *p1 = (char *)&a;
    int *p2 = b;
    
    printf("[INFO] %d %d\n", *p1, p1[0]);
    printf("[INFO] %d %d\n", *p2, p2[0]);

    printf("[INFO] %d %d\n", *(p1+1), p1[1]);
    printf("[INFO] %d %d\n", *(p2+1), p2[1]);

    Struct_A struct_a = {
        .a = 10,
        .b = 1,
        .c = 9,
    };
    Struct_A *p3 = &struct_a;
    
    printf("[INFO] %d %d %d\n", p3->a, p3->b, p3->c);
    
    int *p4 = (int *)&struct_a;
    printf("[INFO] %d %d %d\n", p4[0], p4[1], (char)p4[2]);

    return 0;
}
