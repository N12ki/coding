#include <stdio.h>
/* 
   * * * * *
   *       *
   *       *  
   *       *
   * * * * *
*/

int main()
{
   int i,n,j,k,l;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   { 
    printf("*");
   if(i==1 || i==n)
   {
   for(j=1;j<n;j++)
   {
    printf(" ""*");
   }
   printf("\n");
   }
   else{
   k=n+1;
   for(l=1;l<=k;l++)
   {
     printf(" ");
   }   
   printf("*\n");
   }
   
   }
   printf("\n");
   return 0;
}
