#include <stdio.h>
//+ + + + +
//+ + + + +
//+ + + + +
//+ + + + +

/*int main()
{
    int n,m,i,j;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
    for(j=1;j<=n;j++)
    {
      printf("+");
    }
    printf("\n");
    }
}*/

//     *
//     *
// * * * * *
//     *
//     *

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  {
  if(j==n/2+1 || i==n/2+1)
  {
  printf("*");
  }
  else{
  printf(" ");
  }
  }
  printf("\n");
  }
  return 0;
}

/* *   *
   * *
    *
   * *
  *   *
int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  {
  if(i==j || i+j==n+1)
  {
  printf("*");
  }
  else{
  printf(" ");
  }
  }
  printf("\n");
  }
  return 0;
}*/
