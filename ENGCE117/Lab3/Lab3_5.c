#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[20];
    int age;
};

struct student (*GetStudent (int *room))[10];

int main() {
    struct student (*children)[10];
    int group;

    children = GetStudent(&group);

    /*แสดงผล ลูปจำนวนห้อง และนักเรียน10คน*/
    for (int i = 0; i < group; i++) {
        for (int j = 0; j < 10; j++){

           printf("Room %d Student %d: %s %d\n", i+1,j+1, 
                                                children[i][j].name, 
                                                children[i][j].age);
        }
    }
    
    free(children);
    return 0;
}

struct student (*GetStudent (int *room))[10] {
    struct student (*data)[10];

    /*รับค่าจำนวนห้อง */
    printf("Enter number of rooms: ");
    scanf("%d", room);

    /*จองหน่วยความจำให้ ห้อง * 10 คน*/
    data = malloc(sizeof(struct student[10]) * (*room));
    
    /*รับข้อมูลนักเรียน*/
    for (int i = 0; i < *room; i++) {
        for (int j = 0; j < 10; j++) {
            printf("room %d \nstudent %d: ",
                   i + 1,
                   j + 1);

            scanf("%s %d", data[i][j].name, &data[i][j].age);
        }
    }
    return data; //คืนค่ากลับ

}