#include <stdio.h>

struct student {
    char name [20];
    int age;
    char sex;
    float gpa;
};
void upgrade (struct student *child);

int main() {
    char sexInput;  //เก็บเพศ

    //รับค่าเพศเข้ามา 
    if (scanf("%c", &sexInput) != 1) {       
        return 1; 
    }

    struct student stu; 
    stu.sex = sexInput;
    stu.gpa = 3.00;

    upgrade(&stu); //ส่งที่อยู่ของเพศไป

    printf("%.2f",stu.gpa);
    return 0;
    
}

void upgrade (struct student *child){
    if (child->sex == 'M'){                 //M = Male
        child->gpa = child->gpa * 1.10;     //เพศชาย +10 %

    } else if (child->sex == 'F') {         //F = Female
        child->gpa = child->gpa * 1.20;     //เพศหญิง +20 %
    }
}