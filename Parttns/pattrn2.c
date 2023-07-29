#include <stdio.h>
/*#include <math.h>
int main()
{
 int n,i,j,a,b,s=0;
 printf("ENTER ELEMENTS : \n");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
 if(i==0)
 {
 printf("0");
 }
 for(j=0;j<=i;j++)
 {
 if(j==0)
 {
 int a=pow(2,i);
 s=+a;
 printf("%d",s);
 }
 else{
 b=s*2;
 printf("%d",b);
 }
 }
 printf("\n");
 }
 return 0;
}*/



int main()
{
  int n,i,j,h,k,l;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  l=i-1;
  h=1;
  for(j=1;j<=n;j++)
  {
  if(j<=n-i)
  {
  printf(" ");
  }
  else{
  printf("%d",h);
  h=h+1;
  }
  }
  for(k=1;k<=i-1;k++)
  {
  printf("%d",l);
  l=l-1;
  }
  printf("\n");
  }
  return 0;
}
