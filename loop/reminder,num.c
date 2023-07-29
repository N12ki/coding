#include <stdio.h>
/*int main()
{
  int n,i,j,c=1,k,r;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n-i;j++)
  {
  printf(" "" ");
  }
  for(k=1;k<=c;k++)
  {
  r=k%2;
  printf("%d",r);
  }
  c=c+2;
  printf("\n");
  }
  return 0;
}*/



/*int main()
{
  int n,i,j,c=1,r;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  for(j=1;j<=n-i;j++)
  {
   r=j%2;
   printf("%d",r);
  }
  printf("\n");
  }
  return 0;
}*/


int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  k=1;
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
  if(k%2==0)
  {
  printf("0");
  }
  else{
  printf("1");
  }
  k=k+1;
  }
  printf("\n");
  }
  return 0;
}


/*int main()
{
  int n,a,i,j,c=0,k,r;
  scanf("%d%d",&n,&k);
  for(i=n;i>0;i--)
  {
  if(c==k)
  {
  printf("%d",i);
  }
  else if(n%i==0)
  {
  c=c+1;
  }
  }
  return 0;
}*/
  
