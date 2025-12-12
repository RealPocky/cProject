#include <stdio.h>
#include <stdlib.h>

int *GetSet(int *n) {
    int *d;

    // ขอจำนวนสมาชิกจากผู้ใช้
    printf("number of members: ");
    scanf("%d", n);

    // จองพื้นที่หน่วยความจำให้พอใช้งาน
    d = (int *)malloc(*n * sizeof(int));

    // เช็คว่าจองพื้นที่สำเร็จมั้ย
    if (d == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    // รับค่าข้อมูลทีละตัว
    for (int i = 0; i < *n; i++) {
        printf("Enter member value %d: ", i + 1);
        scanf("%d", &d[i]);
    }

    return d;
}

int main() {
    int *data;
    int num;

    // เรียก GetSet เพื่อรับข้อมูลจากผู้ใช้
    data = GetSet(&num);

    if (data == NULL) {
        return 1;
    }

    printf("You entered:\n");

    // แสดงค่าที่ผู้ใช้กรอกเข้ามา
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }

    // คืนหน่วยความจำที่จองไว้
    free(data);

    return 0;
}
