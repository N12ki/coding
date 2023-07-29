#include <stdio.h>
/*int main()
{
   int m,n,i,k=1,j;
   scanf("%d%d",&m,&n);
   for(i=1;i<=m;i++)
   {
   k=i;
   for(j=1;j<=n;j++)
   {
    printf("%d",k);
   }
   printf("\n");
   }
   return 0;
}*/


/*int main()
{
  int i,j,n,k=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
  printf("%d",k);
  k=k+1;
  }
  printf("\n");
  }
  return 0;
}*/

/*int main()
{
  int i,j,n,k;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  k=n;
  for(j=1;j<=i;j++)
  {
  printf("%d",k);
  k=k-1;
  }
  printf("\n");
  }
  return 0;
}*/


int main()
{
  int i,j,n,k=1;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  for(j=1;j<=i;j++)
  {
  printf("%d",j);
  }
  printf("\n");
  }
  return 0;
}

/*int main()
{
  int i,j,m,n,k=1;
  scanf("%d%d",&m,&n);
  for(i=1;i<=m;i++)
  {
  for(j=1;j<=n;j++)
  {
  printf("%d",j);
 // k=k+1;
  }
  printf("\n");
  }
  return 0;
}*/

