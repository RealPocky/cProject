#include <stdio.h>
#include <stdlib.h>

void GetSet(int data[], int *num);

int main() {
    int *data, num;
    GetSet(data, &num);

    return 0;
}

void GetSet(int data[], int *num) {
    
    //รับค่าจำนวนสมาชิก
    printf("Enter the number of members: ");
    scanf("%d", num);

    data = (int*)malloc(*num * sizeof(int));

    //วนรับค่า
    for (int i = 0; i < *num; i++) {
        printf("Enter member value %d: ", i + 1);
        scanf("%d", &data[i]);
    }
    //แสดงผลลัพ์
    printf("\nYou entered:\n");
    for (int i = 0; i < *num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    free(data);
}
