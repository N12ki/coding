#include <stdio.h>
int main()
{
  int h,m,e,s,c,T,P;
  scanf("%d%d%d%d%d",&h,&m,&e,&s,&c);
  T=h+m+e+s+c;
  P=T/5;
  printf("%d",P);
return 0;
} 
