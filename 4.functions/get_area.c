#include <stdio.h>


/* 模拟基类 
 *
 * 使用typedef struct 后面必须加上别名
 * 才能在结构体中使用本结构体作为函数指针的参数
 * */
typedef struct Shape {
    int width;
    int height;
    // 函数指针
    void (*set_values)(struct Shape *s, int w, int h);
} Shape;

/* 编写成员函数 */
void set_values(Shape *s, int w, int h)
{
    s->width = w;
    s->height = h;
}

/* 派生类，模拟继承 */
typedef struct Rectangle {
    Shape shape;
    // 函数指针
    int (*get_area)(struct Shape *s);
} Rectangle;

/* 编写成员函数 */
int get_area(Shape *s)
{
    return (s->width * s->height);
}

int main(void)
{
    Rectangle rtg = {
        // 模拟基类的成员函数
        .shape.set_values = set_values,
        // 模拟派生类的成员函数
        .get_area = get_area,
    };

    rtg.shape.set_values(&rtg.shape, 10, 10);
    int area = rtg.get_area(&rtg.shape);
    printf("矩形的面积：%d\n", area);

    return 0;
}
