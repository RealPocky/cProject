#include <stdio.h>

void go(int ***target, int **source);

int main() {

    int *num1 = new int;
    *num1 = 10;

    int *num2 = new int;
    *num2 = 20;

    // ตัวแปร pointer หลัก
    int **mainPtr; 

    // สั่งให้ mainPtr ชี้ไปที่ num1
    go(&mainPtr, &num1);
    
    printf("%d %p %p\n", **mainPtr, *mainPtr, &mainPtr);
    printf("Address inside num1: %p\n", num1);

    // สั่งให้ mainPtr ชี้ไปที่ num2
    go(&mainPtr, &num2);

    printf("%d %p %p\n", **mainPtr, *mainPtr, &mainPtr);
    printf("Address inside num2: %p\n", num2);

    return 0;
}

void go(int ***target, int **source) {
    
    *target = source;
    printf("%d %p %p %p\n",***target, **target, *target, target);
}
