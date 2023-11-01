#include <stdio.h>

int main() {
    int n, n2;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    
    char s1[n];
    printf("Enter first array elements: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &s1[i]);
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    
    char s2[n2];
    printf("Enter second array elements: ");
    for (int j = 0; j < n2; j++) {
        scanf(" %c", &s2[j]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n2; j++) {
            if (s1[i] == s2[j]) {
                printf("%c", s1[i]);
                break; 
            }
        }
    }
    
    return 0;
}

