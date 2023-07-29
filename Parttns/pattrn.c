#include <stdio.h>
/*int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n-i;j++)
  {
  printf(" "" ");
  }
  for(k=1;k<=i;k++)
  {
  printf("%d"" ",k);
  }
  printf("\n");
  }
  return 0;
}*/


/*int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  {
  if(j<=n-i)
  {
  printf(" ");
  }
  else{
  printf("*"" ");
  }
  }
  printf("\n");
  }
  for(i=n;i>0;i--)
  {
  for(j=1;j<=n;j++)
  {
  if(j<=n-i)
  {
  printf(" ");
  }
  else{
  printf("*"" ");
  }
  }
  printf("\n");
  }
  return 0;
}*/
  
  
  
/*int main()
{
  int n,i,j,k,h;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  k=n-i;
  for(j=1;j<=k;j++)
  {
  printf(" ");
  }
  for(h=1;h<=i;h++)
  {
  printf("*");
  }
  printf("\n");
  }
  for(i=n-1;i>0;i--)
  {
  for(j=1;j<=n;j++)
  {
  if(j<=n-i)
  {
  printf(" ");
  }
  else{
  printf("*");
  }
  }
  printf("\n");
  }
  return 0;
}*/


int main()
{
  int n,i,j,k,h;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  for(j=1;j<=i;j++)
  {
  printf("*"" ");
  }
  printf("\n");
  }
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
  printf("*"" ");
  }
  printf("\n");
  }
  return 0;
}

* * * *
* * *
* * 
* 
*
* *
* * *
* * * *
