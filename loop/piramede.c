#include <stdio.h>
/*int main()
{
  int i,n,j,t,l,k;
  scanf("%d",&n);
  t=n;
  l=1;
  for(i=1;i<=n*2+1;i++)
  { 
  printf("*");
  }
  printf("\n");
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=t;j++)
   {
   printf("*");
   }
   for(k=1;k<=l;k++)
   {
      printf(" ");
   }
   for(j=1;j<=t;j++)
   {
   printf("*");
   }
   printf("\n");
   t--;
   l=l+2;
   }
   return 0;
}*/
   
   
   
   

int main()
{
  int i,n,j,t,l,a,k;
  scanf("%d",&n);
  t=n;
  l=1;
  for(i=1;i<=n*2+1;i++)
  { 
  printf("%d",i);
  }
  printf("\n");
  for(i=1;i<=n;i++)
  {
  a=1;
   for(j=1;j<=t;j++)
   {
   printf("%d",a);
   a++;
   }
   for(k=1;k<=l;k++)
   {
      printf(" ");
      a++;
   }
   for(j=1;j<=t;j++)
   {
   printf("%d",a);
   a++;
   }
   printf("\n");
   t--;
   l=l+2;
   }
   return 0;
}
   
