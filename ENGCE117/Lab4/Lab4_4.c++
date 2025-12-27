#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};


void SaveNode(struct studentNode *child, char n[], int a, char s, float g);
void GoNext1(struct studentNode **walk); 

int main() {
    
    struct studentNode *head, *curr;

    // สร้างโหนดและใส่ข้อมูล
    head = new struct studentNode;
    SaveNode(head, "one", 6, 'M', 3.11);

    head->next = new struct studentNode;
    SaveNode(head->next, "two", 8, 'F', 3.22);

    head->next->next = new struct studentNode;
    SaveNode(head->next->next, "three", 10, 'M', 3.33);

    head->next->next->next = new struct studentNode;
    SaveNode(head->next->next->next, "four", 12, 'F', 3.44);

   
    curr = head;

    
    GoNext1(&curr);

    printf("%s", curr->name);

    return 0;
}

// ฟังก์ชันสำหรับใส่ข้อมูลลงโหนด
void SaveNode(struct studentNode *child, char n[], int a, char s, float g) {
    strcpy(child->name, n);
    child->age = a;
    child->sex = s;
    child->gpa = g;
}

void GoNext1(struct studentNode **walk) {
   
    if ((*walk)->next != NULL) {
        
        *walk = (*walk)->next;

        printf("%s\n", (*walk)->name);
    }
}
