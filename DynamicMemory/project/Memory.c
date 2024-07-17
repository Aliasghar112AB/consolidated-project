#include "stdio.h"
#include "stdlib.h"

void Recall(int i, int n, int ptr[]) {
    for (i = 0; i < n; ++i) {
        ptr[i] = i + 1;
    }
    for (i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

int reallocate(char status) {
    switch (status) {
        case 'y':
            return 1;
        case 'n':
            return 0;
    }
}

void DynamicMemory() {
    int *ptr;
    int n, i;
    char status;

    n = 5;
    ptr = (int *) malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
    } else {
        Recall(i, n, ptr);

    }
    printf("Do you want to make another memory allocation (y-n)?");
    scanf("%c", &status);
    reallocate(status);
    if (reallocate(status) == 0) {
        printf("OK");
    } else if (reallocate(status) == 1) {
        printf("New array number :");
        scanf("%d", &n);
        ptr = (int *) realloc(ptr, n * sizeof(int));
        Recall(i, n, ptr);
    }
    free(ptr);
}