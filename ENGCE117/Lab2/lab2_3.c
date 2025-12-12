#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitter, char str2[][10], int *count);

int main() {
    char out[20][10]; 
    int num;
    explode("I/Love/You", '/', out, &num);
    
    //แสดงผล
    printf("Count = %d\n", num);
    for (int i = 0; i < num; i++) {
        printf("str2[%d] = \"%s\"\n", i, out[i]);
    }
    return 0;
}

void explode(char str1[], char splitter, char str2[][10], int *count) {
    int i = 0;
    int j = 0; 
    int k = 0; 

    //วนลูปจนกว่าจะเจอค่า Null ใน str1 
    while (str1[i] != '\0') { 

        //ถ้าเจอ splitter ให้ขจบด้วยค่า Null และขึ้นบรรทัด รีเซ็ตค่า k ด้วย
        if (str1[i] == splitter){
            str2[j][k] = '\0';
            j++;
            k = 0;

        } else { //ถ้าไม่เจอ ก็จะบันทึกข้อความ
            str2[j][k] = str1[i];
            k++;

        }
        i++; 
    }
    str2[j][k] = '\0';
    *count = j + 1;
}
