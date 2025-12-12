#include <stdio.h>
#include <stdlib.h>

int* GetMatrix(int *row, int *col);

int main() {
    int *data, m, n;
    int i;

    data = GetMatrix(&m, &n);

  
   
    for(i = 0; i < m * n; i++) {
        printf("%d ", data[i]);
    }
    

    free(data);
    return 0;
}

int* GetMatrix(int *row, int *col) {
    int *matrix;
    int i;

    // รับจำนวนแถวและคอลัมน์
    scanf("%d %d", row, col);

    // จองหน่วยความจำ
    matrix = (int*)malloc((*row) * (*col) * sizeof(int));

    // รับค่าข้อมูลในเมทริกซ์
    for(i = 0; i < (*row) * (*col); i++) {
        scanf("%d", &matrix[i]);
    }

    return matrix;
}
