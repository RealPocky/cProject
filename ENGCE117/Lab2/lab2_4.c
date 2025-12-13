#include <stdio.h>
#include <string.h>

int explode(char str1[], char splitter, char str2[][50]) {
    char split[2];
    split[0] = splitter;
    split[1] = '\0';
    int count = 0;

    //ตัดต่อจากจุดที่ตัด
    char *token = strtok(str1, split);

    while (token != NULL) {
        strcpy(str2[count], token);
        count++;

        //ตัดต่อจากจุดที่ตัด
        token = strtok(NULL, split);
    }

    return count;
}

int main() {
    char str1[] = "I/Love/You";
    char str2[10][50];
    char splitter = '/';

    int count = explode(str1, splitter, str2);

    /*แสดงผล*/
    for (int i = 0; i < count; i++) {
        printf("str2[%d] = %s\n", i, str2[i]);
    }

    printf("count = %d\n", count);

    return 0;
}
