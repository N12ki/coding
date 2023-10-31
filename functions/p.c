#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", ptr[i]);
    }

    printf("\n");
    
    ptr = (int *)realloc(ptr, 6 * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 6; i++) {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++) {
        printf("%d\n", ptr[i]);
    }
    
    free(ptr);
    
    return 0;
}

