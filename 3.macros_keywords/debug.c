#include <stdio.h>

#define LOG_INFO(info, ...) printf("[INFO] [%s : %s : %d]--> "info"\r\n",\
								__FILE__,\
								__FUNCTION__,\
								__LINE__,\
								##__VA_ARGS__)

/* 1.生存规则变量，并通过宏调用 */
#define VAR_GENERATOR(num) int var_##num
#define VAR(num) var_##num

/* 2.泛型函数生成 */
#define ATTRIBUTE_FUNCTION(type, name) type get_##name(void) { return name; }

/* 3.枚举与字符串映射 */
#define COLORS(name) Color_##name

typedef enum {
	COLORS(Red),
	COLORS(Green),
	COLORS(Blue),
} Colors;


int main(void)
{
	// 1.生存规则变量，并通过宏调用
	VAR_GENERATOR(1) = 10;
	VAR_GENERATOR(2) = 100;	
	LOG_INFO("%d", VAR(1));
	LOG_INFO("%d", VAR(2));
	LOG_INFO("%d", var_1);
	LOG_INFO("%d", var_2);
	// 2.泛型函数生成
	int age = 18;
	ATTRIBUTE_FUNCTION(int, age);
	LOG_INFO("%d", get_age());
	// 3.枚举与字符串映射
	LOG_INFO("%d", Color_Red);
	LOG_INFO("%d", Color_Green);
	LOG_INFO("%d", Color_Blue);

	return 0;
}


