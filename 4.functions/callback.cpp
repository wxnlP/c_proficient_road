#include <iostream>
#include <cstring>

class Swap
{
public:
    void exchange(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void exchange(double *a, double *b)
    {
        double temp = *a;
        *a = *b;
        *b = temp;
    }
};

int main(void)
{
    double a = 12.1;
    double b = 13.6;
    int c = 10;
    int d = 12;
    printf("[INFO] %f %f %d %d\n", a, b, c, d);
    Swap s;
    s.exchange(&a, &b);
    s.exchange(&c, &d);
    printf("[INFO] %f %f %d %d\n", a, b, c, d);

}