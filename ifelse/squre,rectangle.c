#include <stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a==b==c==d){
     printf("squre");
  }
  if(a==c && b==d){
     printf("rectangle");
  }
  else{
     printf("invalid");
  }
 }
