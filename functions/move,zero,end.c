#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int j = 0;

    // Move non-zero elements to the front of the array
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }

    // Fill the rest of the array with zeros
    while (j < n) {
        a[j] = 0;
        j++;
    }

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

