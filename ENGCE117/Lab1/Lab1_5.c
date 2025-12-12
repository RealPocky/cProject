#include <stdio.h>
#include <stdlib.h>

void GetMatrix(int **matrixData, int *rows, int *cols);

int main() {
    int *matrixData;
    int rows, cols;

    /* รับค่าจำนวนแถวและคอลัมน์ พร้อมข้อมูลในเมทริกซ์ */
    GetMatrix(&matrixData, &rows, &cols);

    printf("\nMatrix you entered:\n");

    /* แสดงผลเมทริกซ์ */
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrixData[i * cols + j]);
        }
        printf("\n");
    }

    /* คืนหน่วยความจำ */
    free(matrixData);

    return 0;
}

void GetMatrix(int **matrixData, int *rows, int *cols) {

    /* รับจำนวนแถว */
    printf("Enter rows: ");
    scanf("%d", rows);

    /* รับจำนวนคอลัมน์ */
    printf("Enter cols: ");
    scanf("%d", cols);

    /* จองหน่วยความจำสำหรับเมทริกซ์ */
    *matrixData = (int *)malloc((*rows) * (*cols) * sizeof(int));

    /* ตรวจสอบว่าจองหน่วยความจำสำเร็จหรือไม่ */
    if (*matrixData == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    /* รับค่าข้อมูลในเมทริกซ์ */
    printf("Enter matrix values:\n");
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *cols; j++) {
            scanf("%d", &(*matrixData)[i * (*cols) + j]);
        }
    }
}
