#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitter, char str2[][10], int *count);

int main() {
    char out[20][10];
    char text[] = "I/Love/You";
    char spl = '/';
    int num = 0;
    explode(text, spl, out, &num);
    
    /*แสดงผล*/
    for (int i = 0; i < num; i++) {
        printf("str2[%d] = %s\n", i, out[i]);
    }
    printf("Count = %d\n", num);
    
    return 0;
}

void explode(char str1[], char splitter, char str2[][10], int *count) {
    char delim[2] = {splitter, '\0'};
    char *token;
    
    token = strtok(str1, delim);
    while (token != NULL)
    {
        //แยกคำ และคัดลอกลงใน str2
        strcpy(str2[*count], token);
        (*count)++;

        //เริ่มตัดคำจากตำแหน่งเดิมที่ตัดไว้ครั้งก่อน
        token = strtok(NULL, delim);
    }
   
}
