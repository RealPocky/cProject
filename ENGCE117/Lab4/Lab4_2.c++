#include <stdio.h>

void go(int ***p, int **z);

int main() {
    // b ชี้เลข 10, c ชี้เลข 20
    int *b = new int; *b = 10;
    int *c = new int; *c = 20;
    int **a;

    // สั่งให้ a เปลี่ยนไปชี้ที่ b
    go(&a, &b);
    
    // **a คือ 10, *a คือ address ของ 10 (เหมือน b)
    printf("%d %p %p\n", **a, *a, &a);
    printf("B: %p\n", b);

    // สั่งให้ a เปลี่ยนไปชี้ที่ c
    go(&a, &c);

    // **a คือ 20, *a คือ address ของ 20 (เหมือน c)
    printf("%d %p %p\n", **a, *a, &a);
    printf("C: %p\n", c);
}

void go(int ***p, int **z) {
    // เปลี่ยนค่าใน a (*p) ให้เก็บ address ของ b หรือ c (z)
    // ผลคือ: a หันไปชี้ b หรือ c ทันที
    *p = z; 
}