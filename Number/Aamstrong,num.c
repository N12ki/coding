#include <stdio.h>
#include<math.h>
int main()
{
  int a,b,i,j,r,c,A,s=0;
  printf("ENTER THE NUMBER:\n");
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  {
  j=i;
  c=0;
  while(j>0)
  {
    c=c+1;
    j=j/10;
  }
  s=0;
  for(j=i;j>0;j=j/10)
  {
  r=j%10;
  int A=pow(r,c);
  s+=A;
  }
  if(s==i)
  {
  printf("%d ",i);
  }
  }
  return 0;
  }
