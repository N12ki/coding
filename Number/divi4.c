#include <stdio.h> 
int main()
{        
         int N,E,D;
         scanf("%d",&N);
         if(N%4==0)
         {
              E=N+1;
              printf("%d",E);
         }
         else
         {
              D=N-1;
              printf("%d",D);
         }
}
