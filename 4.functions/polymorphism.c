#include <stdio.h>
#include <string.h>


/* 基类 */
typedef struct Person {
    int p_age;
    char p_name[20];
    void (*get_name)(struct Person *p, char *name);
} Person;

void get_name(Person *p, char *name)
{
   strcpy(name, p->p_name);
}

/* 派生类 */
typedef struct Usa_Person {
    Person p;
} Usa_person;

void get_usa_name(Person *p, char *name)
{
    sprintf(name, "%s-usa", p->p_name);
}

/* 派生类 */
typedef struct China_Person {
    Person p;
} China_Person;

void get_china_name(Person *p, char *name)
{
    sprintf(name, "%s-cn", p->p_name);
}

/* 初始化 */
Usa_person usa_p = {
    .p = {
        .p_age = 18,
        .p_name = "lzh",
        .get_name = get_usa_name,
    }
};

China_Person cn_p = {
    .p = {
        .p_age = 18,
        .p_name = "lzh",
        .get_name = get_china_name,

    }
};

void get_person_name(Person *p, char *name)
{
    p->get_name(p, name);
    printf("%s\n", name);
}


int main(void)
{
    char name[20];
    get_person_name(&usa_p.p, name);
    get_person_name(&cn_p.p, name);    
}
