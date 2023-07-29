#include <stdio.h>
int main()
{
  int n,i,j,k,l;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n-i;j++)
  {
  printf(" "" ");
  }
  printf("*"" ");
  for(k=1;k<i;k++)
  {
  if(i==n)
  {
  printf("*"" ");
  }
  else{
  printf(" "" ");
  }
  }
  printf("*"" ");
  printf("\n");
  }
  return 0;
}
  
