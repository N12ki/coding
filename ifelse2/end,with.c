#include <stdio.h> 
int main()
{        
         int N,end;
         scanf("%d",&N);
         end=N%10;
         if(end==3)
         {      
               printf("End's with 3");
         }
         if(end==7)
         {
                printf("End's with 7");
         }
         else
         {
                printf("Number itself");
         }
}
