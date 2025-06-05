#include <iostream>


/* 基类 */
class Shape
{
public:
    void set_values(int w, int h);

protected:
    int width;  // 宽度
    int height; // 高度
};

/* 编写成员函数 */ 
void Shape::set_values(int w, int h)
{
    width = w;
    height = h;
}

/* 派生类，继承基类 */
class Rectangle : public Shape
{
public:
    int get_area(void)
    {
        return width * height;
    }
};



int main(void)
{
    Rectangle rtg;
    rtg.set_values(10, 10);
    int area = rtg.get_area();
    std::cout << "矩阵的面积：" << area << std::endl;

    return 0;
}
