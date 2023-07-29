#include <stdio.h> 
int main()
{        
         int N,M,D,S,end;
         scanf("%d%d",&N,&M);
         if(N>M)
         {
              D=N-M;
              printf("Difference between them=\n%d",D);
         }
         else
         {
              S=N+M;
              printf("Sum of them=\n%d",S);
         }
 }
