#include <stdio.h>
//1
//24
//369
//481216
/*int main()
{
  int i,j,n,k=1;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  for(j=1;j<=i;j++)
  {
  printf("%d",i);
  }
  printf("\n");
  }
  return 0;
}*/



//3
//55
//777
//9999
int main()
{
  int i,j,n,k=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  k=k+2;
  for(j=1;j<=i;j++)
  {
  printf("%d",k);
  }
  printf("\n");
  }
  return 0;
}



/*int main()
{
  int i,j,n,k,p=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
  k=p*p;
  printf("%d",k);
  }
  printf("\n");
  p=p+1;
  }
  return 0;
}*/



//1
//21
//321
//4321

/*int main()
{
  int i,j,n,a;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  a=i;
  for(j=1;j<=i;j++)
  {
  printf("%d",a);
  a=a-1;
  }
  printf("\n");
  }
  return 0;
}


//4321
//321
//21
//1

/*int main()
{
  int i,j,n,a;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  a=i;
  for(j=1;j<=i;j++)
  {
  printf("%d",a);
  a=a-1;
  }
  printf("\n");
  }
  return 0;
}*/
 

//1
//24
//369
//481216 
/*int main()
{
  int i,j,n,a,p;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
  p=i*j;
  printf("%d",p);
  }
  printf("\n");
  }
  return 0;
}  */
