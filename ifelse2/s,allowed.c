#include <stdio.h>
int main()
{
     int Nh,NA,PA;
     scanf("%d%d",&NA,&Nh);
     PA=Nh/NA*100;
     if(PA<75)
     {     
           printf("Allowed");
     }
     else
     {
           printf("Not Allowed");
     }
}
     
