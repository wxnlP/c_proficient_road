#include <stdio.h>
#include <string.h>

typedef struct Person {
    int p_age;
    char p_name[20];
    void (*get_age)(struct Person *p, int *age);
    void (*get_name)(struct Person *p, char *name);
} Person;


void get_age(Person *p, int *age)
{
    *age = p->p_age;
}

void get_name(Person *p, char *name)
{
    strcpy(name, p->p_name);
}

Person p1 = {
    .p_age = 18,
    .p_name = "lzh",
    .get_age = get_age,
    .get_name = get_name,
};

int main(void)
{
    int age;
    char name[20];
    Person *person = &p1;
    person->get_age(person, &age);
    person->get_name(person, name);
    printf("age:%d name:%s\n", age, name);

    return 0;
}

