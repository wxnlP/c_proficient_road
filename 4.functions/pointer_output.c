#include <stdio.h>


/**
 * @brief 加法运算函数 
 * 
 * @params sum 输出参数，存放运算结果
 * @params a 输入参数
 * @params b 输入参数
 *
 * @retval 正常返回0，错误返回-1
 * */
int func(int *sum, int a, int b)
{
    // 若是有错误返回-1
    if ((a + b) == 0) {
        return -1;
    }

    *sum = a + b + 10;
    
    // 函数正常结束，返回0
    return 0;
}

int main(void)
{
    int num_1 = 10;
    int num_2 = 15;
    int sum = 0;
    func(&sum, num_1, num_2);
    printf("[INFO] num_1:%d num_2:%d sum:%d\n", num_1, num_2, sum);
    return 0;
}
