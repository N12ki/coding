#include <stdio.h>
int main()
{
  int n,i,m,s,r;
  scanf("%d",&n);
  r=0;
  m=1;
  s=0;
  for(i=n;i>0;i=i/10)
  {
  r=i%10;
  if(n%2==0)
  {
  s=s+r;
  }
  else{
  m=m*r;
  }
  }
  printf("sum=%d\n",s);
  printf("mult=%d",m);
  return 0;
}
