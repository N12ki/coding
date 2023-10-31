#include <stdio.h>
int main()
{
   int a,b,c,d,min,smin,min2,smin2;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if(a<b)
   {
      min=a;
      smin=b;
   }
   else{
       min=b;
       smin=a;
   }
   if(c<d)
   {
       min2=c;
       smin2=d;
   }
   else{
        min2=d;
        smin2=c;
   }
   if(min<min2)
   {
      a=min;
      b=min2;
   }
   else{
      a=min2;
      b=min;
   }
   if(b<smin)
   {
       printf("Third max is : %d",b);
   }
   else{
      printf("Third max is : %d",smin);
   }
}
