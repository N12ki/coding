#include <stdio.h>
int main()
{
  int a,b,c,d,min,min2,min3,min4;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a<b){
   min=a;
  }
  else{
   min=b;
  }
  if(b<c){
   min2=b;
  }
  else{
   min2=c;
  }
  if(min<min2){
   min3=min;
  }
  else{
   min3=min2;
  }
  printf("%d",min3);
}
  
   
