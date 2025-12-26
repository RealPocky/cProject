#include <stdio.h>
#include <string.h> // ต้องมีเพราะใช้ strcpy

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

// ประกาศหัวฟังก์ชันไว้ก่อน
void SaveNode(struct studentNode *child, char n[], int a, char s, float g);
void GoNext1(struct studentNode *walk);

int main() {
    struct studentNode *start, *now1, **now2;
    
    // สร้างโหนดและใส่ข้อมูลตามโจทย์
    start = new struct studentNode;
    SaveNode(start, "one", 6, 'M', 3.11);

    start->next = new struct studentNode;
    SaveNode(start->next, "two", 8, 'F', 3.22);

    start->next->next = new struct studentNode;
    SaveNode(start->next->next, "three", 10, 'M', 3.33);

    start->next->next->next = new struct studentNode;
    SaveNode(start->next->next->next, "four", 12, 'F', 3.44);

    now1 = start;
    now2 = &start;

    // เรียกใช้ฟังก์ชันที่โจทย์สั่ง
    GoNext1(now1);

    printf("%s", now1->name);

    return 0;
}

void SaveNode(struct studentNode *child, char n[], int a, char s, float g) {
    strcpy(child->name, n);
    child->age = a;
    child->sex = s;
    child->gpa = g;
}

void GoNext1(struct studentNode *walk) {
    
    if (walk->next != NULL) {
       
        walk = walk->next;
        
        printf("%s\n", walk->name);
    }
}
