#include <stdio.h>

void redirectPointer(int **ptr, int *target)
{
    *ptr = target;   // เปลี่ยนให้ pointer ชี้ไปยังตัวแปรใหม่
}

int main(void)
{
    int *a;
    int b = 10;
    int c = 20;

    redirectPointer(&a, &b);

    printf("*a = %d\n", *a);
    printf("a points to %p\n\n", a);

    redirectPointer(&a, &c);

    printf("*a = %d\n", *a);
    printf("a points to %p\n", a);

    return 0;
}
