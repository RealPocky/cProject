#include <stdio.h>

/*สร้าง struct เก็บ name, number*/
struct student {
    char name [20];
    int number;
};

void GetStudent (struct student child[][10], int *rooms);

int main() {
    struct student children [20][10];
    int Rooms;

    GetStudent(children, &Rooms);
    

    /*แสดงผล ลูปจำนวนห้อง และนักเรียน10คน*/
    for (int i = 0; i < Rooms; i++) {
        for (int j = 0; j < 10; j++){

           printf("Room %d Student %d: %s %d\n", i+1,j+1, children[i][j].name, 
                                                        children[i][j].number);
        }
    }

    return 0;
}

void GetStudent (struct student child[][10], int *rooms) {

    printf("Enter number of rooms: ");
    scanf("%d", rooms);   // กำหนดจำนวนห้อง

    for (int i = 0; i < *rooms; i++) {
        for (int j = 0; j < 10; j++) {
            printf("room %d \nstudent %d: ",
                   i + 1,
                   j + 1);

            scanf("%s %d", child[i][j].name, &child[i][j].number);
        }
    }
    return;
}