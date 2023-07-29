#include <stdio.h>
int main()
{
   int n,i,s=0,r;
   scanf("%d",&n);
   for(i=n;i>0;i=i/10)
   {
     r=i%10;
     s=s*10+r;
   }
   printf("%d",s);
   return 0;
}
   
