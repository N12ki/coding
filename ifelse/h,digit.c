#include <stdio.h>
int main()
{
     int N;
     printf("enter the NUMBER:\n");
     scanf("%d",&N);
     if(N<9 && N>0)
     {
           printf("one digit number:\n");
     }
     else if(N>9 && N<100)
     {
           printf("Two digit number:\n");
     }
     else if(N>100 && N<999)
     {
           printf("Three digit number:\n");
     }
     else 
     {
           printf("More then three digit number:\n");
     }
}
