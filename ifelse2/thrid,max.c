#include <stdio.h>
int main()
{
   int n,i,s=0,max=0,smax=0,tmax=0,k;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   scanf("%d",&k);
   if(k>max)
   {
   tmax=smax;
   smax=max;
   max=k;
   }
   else if(k>smax)
   {
   tmax=smax;
   smax=k;
   }
   else if(k>tmax)
   {
   tmax=k;
   }
   else{
   tmax=tmax;
   }
   }
   printf("third max = %d\n",tmax);
   printf(" max = %d\n",max);
   printf("second max = %d",smax);
   return 0;
}
