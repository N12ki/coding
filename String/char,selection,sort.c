#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    char a[n];
    getchar();
    for (int i=0;i<n;i++) 
    {
        scanf(" %c",&a[i]);
    }
    for (int i = 0; i < n - 1; i++) 
    {
        int min = a[i];  
        int minidx =i;

        for (int j = i+1; j < n; j++) 
        {
            if (min > a[j])
            {
                min = a[j];
                minidx = j;
            }
        }
        char t = a[minidx];
        a[minidx] = a[i];
        a[i] = t;
    }
    for (int i = 0; i < n; i++) 
    {
        printf("%c", a[i]);
    }
    return 0;
}
