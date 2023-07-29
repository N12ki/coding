#include <stdio.h>
/*int main()
{
  int n,i,j;
  scanf("%d",&n);
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
}
  * * * * * * 
   * * * * *
     * * * 
      * *
*/       


int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  { 
  for(j=1;j<=n-i;j++)
  {
   printf(" ");
  }
  for(k=1;k<i;k++)
  {
  if(k==1)
  {
  printf("*"" ");
  }
  else if(i==n)
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
   
