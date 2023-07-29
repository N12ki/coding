#include <stdio.h>
int main()
{
  int n,i,j,k;
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
  for(j=1;j<=n;j++)
  {
  if(j<=n-i)
  {
  printf(" "" ");
  }
  else{
  printf("*"" ");
  }
  }
  printf("\n");
  }
  return 0;
}
* * * * * * * * * *
 * * * *   * * * *
  * * *     * * *
   * *       * *
    *         *
  
