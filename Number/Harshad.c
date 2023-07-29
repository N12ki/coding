#include <stdio.h>
/*int main()
{
  int n,i,l,s;
  scanf("%d",&n);
  for(i=n;i>0;i=i/10)
  {
  l=i%10;
  s=s+l;
  }
  if(n%s==0)
  {
  printf("%d = it is a Harshad number",n);
  }
  else{
  printf("%d = it is not a Harshad number",n);
  }
  return 0;
}*/


int main()
{
  int a,b,i,s,l,j;
  scanf("%d%d",&a,&b);
  printf("here is some harshad number beetween %d to %d",a,b);
  for(i=a;i<=b;i++)
  {
  for(j=i;j>0;j=j/10)
  {
  l=j%10;
  s=s+l;
  }
  if(i%s==0)
  {
  printf("%d",i);
  }
  }
  return 0;
}
