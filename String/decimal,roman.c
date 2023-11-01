#include <stdio.h>

int main() {
    int DN;
    printf("Enter a decimal number: ");
    scanf("%d", &DN);

    if (DN <= 0 || DN > 3999) {
        printf("Invalid input. Please enter a number between 1 and 3999.\n");
        return 1;
    }

    char romN[20]; 
    int idx = 0; 
    char romS[] = "IVXLCDM";
    int romV[] = {1, 5, 10, 50, 100, 500, 1000};
    int i = 6; 
    while (DN > 0) {
        int q = DN / romV[i];
        DN = DN % romV[i];

        for (int j = 0; j < q; j++) {
            romN[idx] = romS[i];
            idx++;
        }

        if (i >= 2 && DN >= romV[i] - romV[i - 2]) {
            romN[idx] = romS[i - 2];
            idx++;
            romN[idx] = romS[i];
            idx++;
            DN -= (romV[i] - romV[i - 2]);
        }

        i--;
    }

    romN[idx] = '\0';
    printf("Roman numeral equivalent: %s\n", romN);

    return 0;
}

