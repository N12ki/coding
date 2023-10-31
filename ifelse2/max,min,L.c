#include <stdio.h>
int main()
{
   int n,i,max=0,min=0,a;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   scanf("%d",&a);
   if(a>max)
   {
   max=a;
   }
   if(a<min)
   {
   min=a;
   }
   else
   {
   min=min;
   }
   }
   printf("Max = %d Min = %d",max,min);
   return 0;
}
