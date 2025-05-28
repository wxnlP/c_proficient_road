#include <stdio.h>

/* 声明一个函数指针 */
typedef void (*Callback)(void *user_data);

/* 定义一个用户参数 */
typedef struct {
	char* name;
	int age;
} UserData;

/* 定义一个具体的回调函数 */
void my_callback(void *data)
{
	// 显式转换指针数据类型
	UserData *dt = (UserData*)data;
 	printf("[INFO] name:%s age:%d\r\n", dt->name, dt->age);
}

/* 定义一个回调函数注册函数 */
void register_callback(Callback cb, void *cb_data)
{
	cb(cb_data);
}

int main(void)
{
	UserData dt = {
		.name = "Tim",
		.age = 22,
	};
	register_callback(my_callback, &dt);
	return 0;
}

