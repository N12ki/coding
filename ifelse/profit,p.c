#include <stdio.h>

//Write a program to take selling price and cost price as input and calculate the profit percentage.

int main()
{  
  double sp,cp,PP,p;
  scanf("%lf%lf",&sp,&cp);
  if(sp>cp){
    p=sp-cp;
    PP=p/cp*100;
    printf("PROFIT PERCENTGE=%lf",PP);
  }
  else{
    printf("INVALID");
   }
}
