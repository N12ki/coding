#include <stdio.h>

int main() 
{
    int A ,B ,C , D, E, F, G, H;
    printf("Enter eight numbers:\n");
    scanf("%d %d %d %d %d %d %d %d",  &A,&B,&C,&D,&E,&F,&G,&H);
    
    int max, sm;
    
    // Find the maximum
    if (A > B) {
        max = A;
    } else {
        max = B;
    }

    if (C > max) {
        max = C;
    }

    if (D > max) {
        max = D;
    }

    if (E > max) {
        max = E;
    }

    if (F > max) {
        max = F;
    }

    if (G > max) {
        max = G;
    }

    if (H > max) {
        max = H;
    }

    // Find the second maximum
    if (A != max) {
        sm = A;
    } else {
        sm = B;
    }

    if (C != max && C > sm) {
        sm = C;
    }

    if (D != max && D > sm) {
        sm = D;
    }

    if (E != max && E > sm) {
        sm = E;
    }

    if (F != max && F > sm) {
        sm = F;
    }
    if (G != max && G > sm) {
        sm = G;
    }

    if (H != max && H > sm) {
        sm = H;
    }

    printf("The second maximum is: %d\n", sm);

    return 0;
}

