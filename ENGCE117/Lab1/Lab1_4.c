#include <stdio.h>

int GetSet(int a[]) ;

int main() {
    int data[100];
    int num;

    num = GetSet(data);

    return 0;
}

int GetSet(int a[]) {
    int n;
    int i;

    printf("number of members: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("value [%d]: ", i+1);
        scanf("%d", &a[i]);
    }

    return n;
}
