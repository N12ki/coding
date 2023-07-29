#include <stdio.h>
/*int main()
{
   int n,i,j,a;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   a=1;
   for(j=1;j<=i;j++)
   {
   char ch=(char)(a+64);
   printf("%c",ch);
   a=a+1;
   }
   printf("\n");
   }
   return 0;
}*/



/*int main()
{
   int n,i,j,a;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   a=1;
   for(j=1;j<=n;j++)
   {
   char ch=(char)(a+64);
   printf("%c",ch);
   a=a+1;
   }
   printf("\n");
   }
   return 0;
}*/


/*int main()
{
  int n,i,j,v,a;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  a=1;
  v=1;
  for(j=1;j<=i;j++)
  {
  if(i%2==0)
  {
  char ch=(char)(a+64);
  printf("%c",ch);
  a=a+1;
  }
  else{
  printf("%d",v);
  v=v+1;
  }
  }
  printf("\n");
  }
  return 0;
}*/


/*int main()
{
  int n,i,j,a,v;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  a=1;
  v=1;
  for(j=1;j<=n-i;j++)
  {
  printf(" ");
  }
  for(j=1;j<=i;j++)
  {
  if(i%2==0)
  {
  char ch=(char)(a+64);
  printf("%c",ch);
  a=a+1;
  }
  else{
  printf("%d",v);
  v=v+1;
  }
  }
  printf("\n");
  }
  return 0;
}*/
    
    
    
 #include <stdio.h>
int main()
{
   int n,i,j,a;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   a=1;
   for(j=1;j<=n;j++)
   {
    if(j<=n-i)
    {
    printf(" ");
    }
    else{
    char ch=(char)(a+64);
    printf("%c"" ",ch);
    a++;
    } 
    }
    printf("\n");
    }
    return 0;
}  




