#include <stdio.h>

//"Write a program to find the sum of following series
//1 + 2 + 6 + 24 + 120 . . . . . n terms"
int main()
{
   int i,n,a=1,s=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
     a=a*i;
     s=s+a;
    }
    printf("SUM = %d",s);
   return 0;
}
