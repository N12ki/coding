#include <stdio.h>
int main()
{
    int n,i,j,m,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
    }
    for(k=1;k<=n;k++)
    {
    for(i=1;i<=k;i++)
    {
    printf("*");
    }
    printf("\n");
    }
    return 0;
}
