#include <stdio.h>
int main()
{
   int n,i,s=0,l=0,j,f=1,h;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    for(h=1;h<=i;h++)
    {
     printf("*");
    }
    printf("\n");
    }
    return 0;
}



/*{
   int n,i,s=0,l=0,j,f=1,h;
   scanf("%d",&n);
   for(i=n;i>0;i--)
   {
    for(h=1;h<=i;h++)
    {
     printf("*");
    }
    printf("\n");
    }
    return 0;
}*/
