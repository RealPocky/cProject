#include <stdio.h>

struct student {
    char name [20];
    int age;
    char sex;
    float gpa;
};

struct student upgrade (struct student child);

int main() {

    struct  student aboy;
    aboy.sex = 'M';
    aboy.gpa = 3.00;
    aboy = upgrade(aboy);
    printf ("Male: %.2f\n",aboy.gpa);


    struct  student agirl;
    agirl.sex = 'F';
    agirl.gpa = 3.00;
    agirl = upgrade(agirl);
    printf ("Girl: %.2f\n",agirl.gpa);

    return 0;
    
}

struct student upgrade (struct student child) {
    if (child.sex == 'M'){                 //M = Male
        child.gpa = child.gpa * 1.10;     //เพศชาย +10 %

    } else if (child.sex == 'F') {         //F = Female
        child.gpa = child.gpa * 1.20;     //เพศหญิง +20 %
    }
    return child;
}