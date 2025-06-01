#include <stdio.h>


typedef struct {
    int a;
    int b;
    char c;
} Struct_A;

void find_struct(int *member)
{
    unsigned long offset = (unsigned long)&((Struct_A *)0)->b;
    printf("[INFO] ofset = %ld\n", offset);
    Struct_A *p = (Struct_A *)((char *)member - offset);
    printf("[INFO] %d %d %d\n", p->a, p->b, p->c);
}

int main(void)
{
    Struct_A struct_a = {
        .a = 10,
        .b = 1,
        .c = 9,
    };
    Struct_A *p3 = &struct_a;
    
    printf("[INFO] %d %d %d\n", p3->a, p3->b, p3->c);

    find_struct(&(p3->b));

    return 0;
}
