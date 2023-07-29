#include <stdio.h>
int main()
{
  int l,b,h,A,T,w;
  scanf("%d%d%d",&l,&b,&h);
  A=2*(l*w+w*h+l*h);
  T=2*h*(l+w);
  printf("A=%d t=%d",A,T);
return 0;
} 
