#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse(char str1[]) {
    int length = strlen(str1);
    char *str2 = (char*)malloc(length + 1);

    if (str2 == NULL) {
        return NULL;
    }

    int pos = 0;
    for (int i = length - 1; i >= 0; i--) {
        str2[pos++] = str1[i];
    }

    str2[pos] = '\0';
    return str2;
}

int main() {
    char text[50] = "I Love You";
    char *out = reverse(text);

    if (out != NULL) {
        printf("reverse: %s\n", out);
        free(out);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
