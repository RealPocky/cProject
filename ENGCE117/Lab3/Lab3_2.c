#include <stdio.h>

struct student
{
    char name[20];
    int age;
    char sex;
    float gpa;
};
void upgrade(struct student *c);

int main() {
    struct student stu;
    char sexInput;  //เก็บเพศ
    
    //รับค่าเพศเข้ามา 
    if (scanf(" %c", &sexInput) != 1)
    {
        return 1;
    }

    stu.sex = sexInput;
    stu.gpa = 3.00;

    upgrade(&stu);

    printf("%.2f\n", stu.gpa);

    return 0;
    
}

void upgrade(struct student *c)
{
    if (c->sex == 'M')
    {
        c->gpa = c->gpa * 1.10;
    }
    else if (c->sex == 'F')
    {
        c->gpa = c->gpa * 1.20;
    }
}
