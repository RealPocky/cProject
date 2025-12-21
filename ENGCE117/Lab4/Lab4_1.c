#include <stdio.h>

void go (int **p, int *z);
    
int main() {
    int *a;
    int b = 10;
    int c = 20;

    go(&a, &b);
    printf("b = %d &b = %p\n", b, &b);
    printf("*a = %d a = %p\n", *a, a);

    go(&a, &c);
    printf("c = %d &c = %p\n", c, &c);
    printf("*a = %d a = %p\n", *a, a);
    return 0;

}

void go (int **p, int *z){
    *p = z; // ทำให้ p ชี้ไปที่ z

}
