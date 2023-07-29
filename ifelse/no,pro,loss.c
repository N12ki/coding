#include <stdio.h>
int main()
{
  int sp,cp,L,P,PP,LP;
  scanf("%d%d",&sp,&cp);
  if(sp==cp){
     printf("no profit no loss");
     }
  else{
   if(sp>cp){
     P=sp-cp;
     PP=P/cp*100;
     printf("PROFIT PERCENTEGE=%d",PP);
   }
   else{
    L=cp-sp;
    LP=L/sp*100;
    printf("LOSS PERCENTEGE=%d",LP);
   }
  }
 }
