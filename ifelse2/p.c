#include <stdio.h>
/*int main()
{
  int i,n,j;
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
  for(j=0;j<=i;j++)
  {
  printf("%d",j*j);
  }
  printf("\n");
  }
  return 0;
}*/



int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  {
  if(j<=n-i)
  {
  printf(" ");
  }
  if(i+j==n+1)
  {
  printf("*"" ");
  }
  if(i==n){
  printf("*"" ");
  }
  if(j==n);
  {
  printf("*"" ");
  }
  printf(" "" ");
  }
  printf("\n");
  }
  return 0;
}
