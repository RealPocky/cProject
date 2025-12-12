#include <stdio.h>
#include <string.h>

void reverse(char str1[], char str2[]);

int main() {
    char text [ 50 ] = "I Love You";
    char out [ 50 ];
    reverse(text, out);

    //แสดงผล
    printf("textIN: %s\n", text);
    printf("textOut: %s\n", out);
    
    return(0);
}

void reverse(char str1[], char str2[]){
    int i = 0;
    int j = 0;
    int len = strlen(str1);

    for (i = len -1; i >= 0; i--) { //Loop ย้ายข้อความ input ไป output
        
        str2[j] = str1[i];
        j++;
    }
    str2[j] = '\0';
}