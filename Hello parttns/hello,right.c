#include <stdio.h>
int main()
{
  int n,i,j,k,l;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  printf("*"" ");
  if(i==n)
  {
  for(k=1;k<=n;k++)
  {
   printf("*"" ");
  }
  printf("\n");
  }
  else if(i==1){
  l=n-1;
  for(j=1;j<=l;j++)
  {
   printf(" "" ");
  }
  printf("*");
  }
  for(j=1;j<=i-1;j++){
  printf(" "" ");
  }
  printf("*"" ");
  for(k-1;k<=n-(i+1);k++)
  {
  printf(" "" ");
  }
  printf("\n");
  }
  return 0;
}
  
