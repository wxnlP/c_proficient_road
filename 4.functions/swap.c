#include <stdio.h>

void func(int *a, int *b)
{
    // 临时变量，记录a/b的值
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int num_1 = 10;
    int num_2 = 15;
    func(&num_1, &num_2);
    printf("[INFO] num_1:%d num_2:%d\n", num_1, num_2);
    return 0;
}
