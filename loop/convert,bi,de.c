#include <stdio.h>
int main()
{
   int n,i,s=0,r;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    r=n%10;
    s=s+r*2**i;
   }
   printf("decimal : %d",s);
   return 0;
}
