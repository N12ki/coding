#include <stdio.h>
/*int main()
{
  int n,i,j,k=0,c=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=2;j<=10;j++)
  {
  if(i%j==0)
  {
  k=k+1;
  }
  }
  if(k==0)
  {
  c=c+1;
  }
  }
  printf("%d",c);
  printf("\n");
}*/


int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
  for(j=0;j<=i;j++)
  {
  k=j+i;
  printf("%d",k);
  }
  if(j<=i)
  {
  printf("%d",j);
  }
  printf("\n");
  }
  return 0;
}
