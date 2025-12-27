#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

void SaveNode(struct studentNode *child, const char n[], int a, char s, float g);
void GoNext2(struct studentNode **walk);

int main() {
    
    struct studentNode *head, **ptr2;

    
    head = new struct studentNode;
    SaveNode(head, "one", 6, 'M', 3.11);

    head->next = new struct studentNode;
    SaveNode(head->next, "two", 8, 'F', 3.22);

    head->next->next = new struct studentNode;
    SaveNode(head->next->next, "three", 10, 'M', 3.33);

    head->next->next->next = new struct studentNode;
    SaveNode(head->next->next->next, "four", 12, 'F', 3.44);

    
    ptr2 = &head;

    // เรียกฟังก์ชัน
    GoNext2(ptr2);

    
    printf("%s ", (*ptr2)->name);

    return 0;
}

void SaveNode(struct studentNode *child, const char n[], int a, char s, float g) {
    strcpy(child->name, n);
    child->age = a;
    child->sex = s;
    child->gpa = g;
}

// เขียนไส้ในฟังก์ชัน
void GoNext2(struct studentNode **walk) {
    
    if ((*walk)->next != NULL) {
        
        
        *walk = (*walk)->next;

        // แสดงผล
        printf("%s ", (*walk)->name);
    }
}