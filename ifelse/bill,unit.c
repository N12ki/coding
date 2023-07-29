#include <stdio.h>
int main()
{
     int u,Bill,cost;
     printf("enter the value of unit:\n");
     scanf("%d",&u);
     
     if(u<50){
       cost=u*0.5;
     }
     else if(u<=150 && u>50){
          cost=(50*0.5)+(u*50)*0.75;
     }
     else if(u<=250 && u>150){
          cost=(50*0.5)+(100*0.75)+(u-150)*1.;
     }
     else{
          cost=(50*0.5)+(100*0.75)+(100*1.2)+(u-250)+1.5;
          Bill=(20/100*cost)+cost;
          printf("Bill of electricity=%d\n",Bill);
     }
}
        
        
/*#include <stdio.h>
int main()
{
     int u,Bill,cost,cost2;
     printf("enter the value of unit:\n");
     scanf("%d",&u);
     
     if(u<50){
       cost=u*0.5;
     }
     else if(u<=150 && u>50){
     cost=u*0.75;
     }
     else if(u<=250){
     cost=u*1.20;
     }
     else if(u>200){
     cost=u*1.50;
     cost2=cost*20/100;
     Bill=cost+cost2;
     printf("Bill of electricity=%d\n",Bill);
     }
     else{
     printf("Invalid");
     }
  return 0;
}*/
