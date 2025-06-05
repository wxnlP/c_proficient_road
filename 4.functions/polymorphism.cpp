#include <iostream>
#include <cstring>

class Person
{
public:
    // 构造函数
    Person(const char *name, int age)
    {
        strcpy(p_name, name);
        p_age = age;
    }

    // 成员函数
    virtual void get_name(char *name)
    {
        strcpy(name, p_name);
    }

protected:
    int p_age;
    char p_name[20];
};


class Usa_Person : public Person
{
public:
    Usa_Person(const char *name, int age) : Person(name, age)
    {
        
    }

    void get_name(char *name)
    {
        sprintf(name, "%s-usa", p_name);
    }
};


class China_Person : public Person
{
public:
    China_Person(const char *name, int age) : Person(name, age)
    { 
        
    }   

    void get_name(char *name)
    {   
        sprintf(name, "%s-cn", p_name);
    }   
};


void get_person_name(Person *p, char *name)
{
    p->get_name(name);
    printf("%s\n", name);
}

int main(void)
{
    char name[20];
    Usa_Person usa_p("lzh", 18);
    China_Person cn_p("lzh", 18);
    get_person_name(&usa_p, name);
    get_person_name(&cn_p, name);
}

