#include <stdio.h>
/*int main()
{
  int n,i,j,k,l;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
  printf("%d",j);
  }
  l=i-1;
  for(k=1;k<=i-1;k++)
  {
   printf("%d",l);
   l=l-1;
  }
  printf("\n");
  }
  return 0;
}*/
  
  
  
  
/*#include <stdio.h>
int main()
{
  int n,i,j,k=3,l=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
  printf("%d",l);
  l=l-1;
  }
  printf("\n");
  l=l+k;
  k=k+1;
  }
  return 0;
}*/
  
  
/*int main()
{
  int n,i,j,k=0,l;
  scanf("%d",&n);
  l=n;
  for(i=1;i<=n;i++)
  {
  k=2*i-1;
  for(j=1;j<=l;j++)
  {
  printf("%d",k);
  k=k+2;
  }
  printf("\n");
  l=l-1;
  }
  return 0;
}*/
  
  
/*int main()
{
  int n,i,j,l,k=0;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  k=k+1; 
  l=k;
  for(j=1;j<=n;j++)
  {
  if(j<=n-i)
  {
  printf(" ");
  }
  else{
  printf("%d"" ",l);
  l=l+1;
  }
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
  if(j<=i)
  {
  printf("%d",i);
  }
  else{
  printf("%d",j);
  }
  }
  printf("\n");
  }
  return 0;
}



