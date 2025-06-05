#include <stdio.h>


void exchange_int(void *a, void *b)
{
    int temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}

void exchange_double(void *a, void *b)
{
    double temp = *(double *)a;
    *(double *)a = *(double *)b;
    *(double *)b = temp;
}

// 声明一个函数指针
typedef void (*exchange)(void *a, void *b);

void swap(exchange ex, void *a, void *b)
{
    ex(a, b);
}

int main(void)
{
    double a = 12.1;
    double b = 13.6;
    int c = 10;
    int d = 12;
    printf("[INFO] %f %f %d %d\n", a, b, c, d);
    swap(exchange_double, &a, &b);
    swap(exchange_int, &c, &d);
    printf("[INFO] %f %f %d %d\n", a, b, c, d);

}