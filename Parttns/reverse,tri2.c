#include <stdio.h>
int main()
{
  int n,i,j,h,k,a,l;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  k=n;
  for(j=1;j<=i;j++)
  {
  printf("%d"" ",k);
  k=k-1;
  }
  a=1;
  for(l=1;l<=n;l++)
  {
  if(l<=n-i)
  {
  printf(" ");
  }
  else{
  printf("%d",a);
  a=a+1;
  }
  }
  printf("\n");
  }
  return 0;
}
  
