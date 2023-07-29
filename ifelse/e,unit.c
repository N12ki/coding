#include <stdio.h>
int main()
{
     int u,cost;
     printf("enter the value of unit:\n");
     scanf("%d",&u);
     if(u<=100){
     printf("NO Charge");
     }
     else if(u<=200 && u>100){
     cost=(u-100)*5;
          printf("%d",cost);
     }
     else if(u<400 && u>200){
     cost=(100*5)+(u-200)*10;
          printf("electricity unit Bill=%d",cost);}
     else{
     printf("Invalid");
     }
     return 0;
   }
     
