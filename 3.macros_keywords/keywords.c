#include <stdio.h>
#include <string.h>
// #define KEY_SIZEOF
// #define KEY_CHAR
// #define KEY_INT
// #define KEY_VOID
#define KEY_STRUCT

#if defined(KEY_SIZEOF)
int my_sizeof(int a)
{
	return sizeof(a);
}
int a = 10;
int b = 0;
int c = 0;
#elif defined(KEY_CHAR)
char a = 64;
#elif defined(KEY_INT)
int a = 25;
short b = 25;
long c = 25;
unsigned char d = 128;
signed char e = 128;
#elif defined(KEY_STRUCT)
typedef struct{
	char a;
	int b;
} Struct_A;

typedef struct{
	char a;
	char c;
	int b;
} Struct_B;

typedef struct{
	char a;
	int b;
	char c;
} Struct_C;
#endif

int main(void)
{	
#if defined(KEY_SIZEOF)
	b = sizeof(a);
	c = my_sizeof(a);
	printf("[INFO] %d\r\n", b);
	printf("[INFO] %d\r\n", c);
#elif defined(KEY_CHAR)
	printf("[INFO] 数字:%d ASCII字符:%c\r\n", a, a);
#elif defined(KEY_INT)
	printf("[INFO] int: %ldbyte short: %ldbyte long: %ldbyte\r\n", 
			sizeof(a), sizeof(b), sizeof(c));
	printf("[INFO] unsigned: %d signed: %d\r\n", d, e);
#elif defined(KEY_VOID)
	int a = 10;
	float b = 3.14f;
	// void指针需要显式数据类型转换后使用
	void* ptr;
	ptr = &a;
	printf("[INFO] %d %p\r\n", *(int*)ptr, ptr);
	ptr = &b;
	printf("[INFO] %f %p\r\n", *(float*)ptr, ptr);
	// void*
	int var_a = 0;
	int var_b = 0x785621;
	memcpy(&var_a, &var_b, 1);
	printf("[INFO] 0x%X\r\n", var_a);
#elif defined(KEY_STRUCT)
	Struct_A struct_a = {
		.a = 'c',
		.b = 8,
	};
	Struct_B struct_b = {
        .a = 'c',
        .b = 8,
		.c = 'a',
    };
	Struct_C struct_c = {
        .a = 'c',
        .b = 8,
		.c = 'a',
    };
	printf("[INFO] size_a: %ld size_b: %ld size_struct_a: %ld\r\n", 
			sizeof(struct_a.a), sizeof(struct_a.b), sizeof(struct_a));
	printf("[INFO] size_a: %ld size_b: %ld size_c: %ld size_struct_b: %ld\r\n",
            sizeof(struct_b.a), sizeof(struct_b.b), sizeof(struct_b.c), sizeof(struct_b));
    printf("[INFO] size_a: %ld size_b: %ld size_c: %ld size_struct_c: %ld\r\n",
            sizeof(struct_c.a), sizeof(struct_c.b), sizeof(struct_c.c), sizeof(struct_c));
#endif
	return 0;	
}
