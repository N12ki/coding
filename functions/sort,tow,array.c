#include <stdio.h>
void merge(int a[], int n, int b[], int m)
{
	int c[n + m];
	int i = 0, j = 0, k = 0;
    	while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged and sorted array: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }
}

int main() {
    int n, m;

    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);
    int b[m];

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    merge(a, n, b, m);
    return 0;
}

