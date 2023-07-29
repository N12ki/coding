#include <stdio.h>
int main()
{
  double sp,cp,L,LP;
  scanf("%lf%lf",&sp,&cp);
  if(sp<cp){
   L=cp-sp;
   LP=L/sp*100;
   printf("Lose percentge=%lf",LP);
  }
  else{
    printf("INVALID"); 
  }
}
  
