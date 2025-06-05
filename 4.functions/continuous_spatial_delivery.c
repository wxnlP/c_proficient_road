#include <stdio.h>

void func_1(const char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

void func_2(int *num, int len)
{
    for (int i = 0 ; i < len ; i++) {
        printf("%d", num[i]);
    }
    printf("\n");
}

int main(void)
{
    char *s = "hello world";
    int n[] = { 1, 2, 3, 4, 6 };
    func_1(s);
    func_2(n, 5);

    return 0;
}
