#include <stdio.h>

int explode(char source[], char splitter, char result[][50])
{
    int textPos = 0;
    int wordPos = 0;
    int charPos = 0;

    while (source[textPos] != '\0')
    {
        if (source[textPos] == splitter)
        {
            result[wordPos][charPos] = '\0';
            wordPos++;
            charPos = 0;
        }
        else
        {
            result[wordPos][charPos] = source[textPos];
            charPos++;
        }

        textPos++;
    }

    result[wordPos][charPos] = '\0';
    wordPos++;

    return wordPos;
}

int main()
{
    char text[50];
    char words[10][50];
    char sep;
    int total;
    int i;

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter splitter: ");
    scanf(" %c", &sep);

    total = explode(text, sep, words);

    for (i = 0; i < total; i++)
    {
        printf("str2[%d] = %s\n", i, words[i]);
    }

    printf("count = %d\n", total);

    return 0;
}
