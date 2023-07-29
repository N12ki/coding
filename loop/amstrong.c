#include <stdio.h>
#include<math.h>
int main()
{
  int n,i,j,r,l,sum=0,c;
  printf("ENTER THE NUMBER:- ");
  scanf("%d",&n);
  i=n;
  c=0;
  while(i>0)
  {
    c=c+1;
    i=i/10;
  }
  for(j=n;j>0;j=j/10)
  {
  r=j%10;
  int a=pow(r,c);
  sum=sum+a;
  if(sum==n)
  {
  printf("%d = it is a Aamstrong number",n);
  }
  else
  {
  printf("%d = it is not a Aamstrong number",n);
  break;
  }
  }
  return 0;
}
  
