#include <stdio.h>
int main()
{
  int n,i,s,j;
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
  	s=1;
  	for(j=0;j<=i;j++)
  	{
  		printf("%d ",s);
  		s=s*(i-j)/(j+1);
  	}
  	printf("\n");
  }
  return 0;
}
