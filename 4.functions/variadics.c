#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

double average(int num, ...)
{
    if (num <= 0) { return 0.0; }
    // 声明参数列表
    va_list args;
    // 初始化参数列表
    va_start(args, num);

    double sum = 0.0;
    for (int i = 0 ; i < num ; i++) {
        // 获取参数列表的下一个参数，进行求和运算
        sum += va_arg(args, double);
    }
    // 清理操作
    va_end(args);

    return sum/num;
}

// 简易版printf实现
void my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    
    // 遍历格式字符串
    for (const char *p = format; *p != '\0'; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }
        
        // 处理格式符
        p++; // 跳过%符号
        switch (*p) {
            case 'd': {
                int i = va_arg(args, int);
                printf("%d", i);
                break;
            }
            case 'f': {
                double d = va_arg(args, double);
                printf("%.2f", d); // 限制两位小数
                break;
            }
            case 'c': {
                // 注意：char会被提升为int
                int c = va_arg(args, int);
                putchar(c);
                break;
            }
            case 's': {
                char *s = va_arg(args, char*);
                printf("%s", s);
                break;
            }
            case 'X': 
            case 'x': {
                unsigned int u = va_arg(args, unsigned int);
                printf("%X", u);
                break;
            }
            case '%': {
                putchar('%');
                break;
            }
            default: {
                putchar('%');
                putchar(*p);
                break;
            }
        }
    }
    
    va_end(args);
}

int main(void)
{
    double aver = average(3, 20.0, 30.0, 50.0);
    printf("%f\n", aver);
    return 0;
}
