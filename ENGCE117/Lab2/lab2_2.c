#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

// ส่วนที่คุณต้องเติมโค้ดลงไป
char* reverse(char str1[]);

int main() {
    char text[50] = "I Love You";
    char *out;

    out = reverse(text);
    // ใช้ printf เพื่อตรวจสอบผลลัพธ์
    printf("reverse: %s\n", out);
    
    return 0;
}

char* reverse(char str1[]) {
    int i,j = 0;
    int length = strlen(str1); //เก็บความยาวของข้อความที่่รับมา 
    char *str2 = (char *)malloc(length + 1 ); 

    //Loopในการย้ายข้อความ
    for (i = length -1; i >= 0; i--) { 
        str2[j] = str1[i];
        j++;

    }
    
    str2[j] = '\0';
    return str2;
}
