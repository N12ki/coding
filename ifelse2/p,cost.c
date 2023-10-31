#include <stdio.h>
int main()
{
  int x,y,pcost,Q;
  scanf("%d%d",&x,&y);
  pcost=x%y;
  Q=pcost/5;
  printf("pen cost=%d",Q);
  }
