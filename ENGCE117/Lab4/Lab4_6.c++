#include <stdio.h>
#include <string.h>

struct Node {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct Node *next;
};


void saveNode(struct Node *child, const char n[], int a, char s, float g);
void move_next(struct Node ***walk); 

int main() {

    struct Node *head, **ptr_ref;

    head = new struct Node;
    saveNode(head, "one", 6, 'M', 3.11);

    head->next = new struct Node;
    saveNode(head->next, "two", 8, 'F', 3.22);

    head->next->next = new struct Node;
    saveNode(head->next->next, "three", 10, 'M', 3.33);

    head->next->next->next = new struct Node;
    saveNode(head->next->next->next, "four", 12, 'F', 3.44);

    ptr_ref = &head;

    move_next(&ptr_ref);

    
    printf("%s", (*ptr_ref)->name);

    return 0;
}

// ฟังก์ชันเก็บข้อมูล
void saveNode(struct Node *child, const char n[], int a, char s, float g) {
    strcpy(child->name, n);
    child->age = a;
    child->sex = s;
    child->gpa = g;
}

// ฟังก์ชันเลื่อน Pointer
void move_next(struct Node ***walk) {
    if ((**walk)->next != NULL) {
        
        **walk = (**walk)->next;

        printf("%s ", (**walk)->name);
    }
}
