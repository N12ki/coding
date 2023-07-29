#include <stdio.h>    
/*int main()
{
   int n,i,s=0,l=0,j,f=1,k,h;
   scanf("%d",&n);
   for(i=n;i>0;i--)
   {
     k=n-i;
     j=1;
    while(j<=k)
    {
     printf(" ");
     j++;
    }
    for(h=1;h<=i;h++)
    {
     printf("*");
    }
    printf("\n");
    }
    return 0;
}*/
   
   
/*int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  { 
  for(j=1;j<=n-i;j++)
  {
   printf(" "" ");
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
}*/ 

int main()
{
   int n,i,k,h,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     k=n-i;
     j=1;
    while(j<=k)
    {
     printf(" ");
     j++;
    }
    for(h=1;h<=i;h++)
    {
     printf("*");
    }
    printf("\n");
    }
    return 0;
}
