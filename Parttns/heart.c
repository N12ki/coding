#include <stdio.h>

int main()
{
    int n, i, j, k, l;
    scanf("%d", &n);
    l = n / 2;

    // Print the upper half of the heart
    for (i = 1; i <= l; i++) {
        k = l - i;

        // Print spaces before left side of the heart
        for (j = 1; j <= l - i; j++) {
            printf(" ");
        }

        // Print the left side of the heart
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        // Print spaces in the middle
        for (j = 1; j <= k * 2; j++) {
            printf(" ");
        }

        // Print the right side of the heart
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    // Print the lower half of the heart
    for (i = n; i > 0; i--) {
        for (j = 1; j <= n; j++) {
            if (j <= n - i) {
                printf(" ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}

