#include <stdio.h>
#include <stdlib.h> 

void changePointer(int **ptr, int *newTarget);

int main() {

    int *num1;
    num1 = (int*)malloc(sizeof(int)); 
    // กำหนดค่าให้มัน
    *num1 = 10;

    // สร้างตัวแปร pointer ตัวที่ 2
    int *num2;
    num2 = (int*)malloc(sizeof(int));
    *num2 = 20;

    // ตัวแปร pointer หลักที่จะเอามาชี้สลับไปมา
    int *mainPtr; 

    // เรียกฟังก์ชัน ให้ mainPtr ชี้ไปที่ num1
    changePointer(&mainPtr, num1);
    
    // แสดงผล
    printf("Value: %d\n", *mainPtr);
    printf("Address stored in mainPtr: %p\n", mainPtr);
    printf("Address of num1: %p\n", num1);
    printf("------------------\n");

    // เรียกฟังก์ชัน ให้ mainPtr เปลี่ยนไปชี้ที่ num2
    changePointer(&mainPtr, num2);

    // แสดงผลรอบที่ 2
    printf("Value: %d\n", *mainPtr);
    printf("Address stored in mainPtr: %p\n", mainPtr);
    printf("Address of num2: %p\n", num2);

    return 0;
}

// ฟังก์ชันรับค่าเข้ามาเพื่อเปลี่ยนที่ชี้
void changePointer(int **ptr, int *newTarget) {
    // เปลี่ยนค่าที่ ptr ชี้อยู่ ให้ไปชี้ที่ newTarget แทน
    *ptr = newTarget;
    
    
    printf("Debug inside function: %d\n", **ptr);
}
