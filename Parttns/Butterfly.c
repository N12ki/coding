#include <stdio.h>
int main()
{
  int n,i,j,h,k,a,l;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  l=i*2;
  for(j=1;j<=i;j++)
  {
  printf("*"" ");
  }
  a=n*2-l;
  for(k=1;k<=a;k++)
  {
  printf(" "" ");
  }
  for(j=1;j<=i;j++)
  {
  printf("*"" ");
  }
  printf("\n");
  }
  for(i=n;i>0;i--)
  {
  l=i*2;
  for(j=1;j<=i;j++)
  {
  printf("*"" ");
  }
  a=n*2-l;
  for(k=1;k<=a;k++)
  {
  printf(" "" ");
  }
  for(j=1;j<=i;j++)
  {
  printf("*"" ");
  }
  printf("\n");
  }
  return 0;
}
