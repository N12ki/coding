#include <stdio.h>
int main()
{
   double s=0;
   int n,i,x,f=1,j;
   scanf("%d%d",&n,&x);
   for(i=1;i<=n;i++)
   {
   f=f*i;
   s=s+x*i/f;
   i=i+1;
   }
   printf("%lf",s+1);
   return 0;
}
   
