#include <stdio.h>
/*int main()
{
    int n,i;
    printf("Enter how many terms you want :");
    scanf("%d",&n);
    i=10;
    while(i<=n)
    {
      printf("%d\n",i);
      i=i+10;
    }
    return 0;
}*/


int main()
{
    int n,i;
    printf("Enter how many terms you want :");
    scanf("%d",&n);
   for(i=105;i>=n;i=i-7)
    {
      printf("%d\n",i);
    }
    return 0;
}
