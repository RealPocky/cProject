#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

// ส่วนที่คุณต้องเติมโค้ดลงไป
char* reverse(char str1[]);

int main() {
    char text[50] = "I Love You";
    char *out;               
    
    out = reverse(text);

    free(out); //คืนหน่วยความจำ

    // ใช้ printf เพื่อตรวจสอบผลลัพธ์
    printf("Original: %s\n", text);
    printf("Reversed: %s\n", out);
    
    return 0;
}

char* reverse(char str1[]) {
    int i = 0;
    int n = 0;
    int len = strlen(str1); //เก็บความยาวของข้อความที่่รับมา

    char *str2 = (char *)malloc(len + 1 * sizeof(char)); 

    //Loop ย้ายข้อความ input ไป str2
    for (i = len -1; i >= 0; i--) { 
        str2[n] = str1[i];
        n++;
    }
    str2[n] = '\0';

    //ส่งค่าstr2ไปยังmain
    return str2;
}