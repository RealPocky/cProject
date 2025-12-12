#include <stdio.h>
#include <stdlib.h>

int* GetSet(int *n) {
    printf("N: ");
    if (scanf("%d", n) != 1 || *n <= 0) return NULL;

    int *d = malloc(*n * sizeof(int));
    if (!d) return NULL;

    for (int i = 0; i < *n; i++) {
        printf("V%d: ", i+1);
        scanf("%d", &d[i]);
    }
    return d;
}

int main() {
    int num, *data = GetSet(&num);

    if (data) {
        for (int i = 0; i < num; i++) printf("%d ", data[i]);
        free(data);
    }
    return 0;
}