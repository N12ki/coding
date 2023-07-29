#include<stdio.h>
int main()
{
  int n,mul=1,sum=0,l;
  scanf("%d",&n);
  while(n>0)
  {
    l=n%10;
    sum=sum+l;
    mul=mul*l;
    n=n/10;
  }
  printf("sum=%d\n",sum);
  printf("mul=%d\n",mul);
  return 0;
}
