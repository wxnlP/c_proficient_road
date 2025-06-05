#include <iostream>
#include <cstring>


class Person
{
public:
    // 构造函数
    Person(int age, const char *name);
    // 成员函数
    void get_age(int *age);
    void get_name(char *name);

protected:
    int p_age;
    char p_name[20];
};

Person::Person(int age, const char *name)
{
    p_age = age;
    strcpy(p_name, name);
}

void Person::get_age(int *age)
{
    *age = p_age;
}

void Person::get_name(char *name)
{
    strcpy(name, p_name);
}


int main(void)
{
    char name[20];
    int age;
    Person p(18, "lzh");
    p.get_age(&age);
    p.get_name(name);
    std::cout << "name:" << name << " age:" << age << std::endl;

    return 0;
}


