#include <stdio.h>
int main()
{
     int Age,G,M,F,cost,wage;
     printf("enter the value of Age:\n");
     scanf("%d",&Age);
     printf("enter the value of gender;\n");
     scanf("%d",&G);
     if(Age>=18 && Age<30){
     if(G==M){
         wage=700;
         printf("%d",wage);
     }
     else if(G==F){
         wage=750;
         printf("%d",wage);
     }
     }
     else if(Age>=30 && Age<=40){
        if(G==F){
          wage=850;
          printf("%d",wage);
          }
        else if(G==M){
          wage=850;
          printf("%d",wage);
        } 
    }
    else{
           printf("Enter appropriate Age:\n");
     }
     return 0;
}
        
