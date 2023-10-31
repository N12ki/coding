#include <stdio.h>
int findmax(int x,int y,int z)
{
	int max=x;
	if(y>max)
	{
		max = y;
	}
	else if(z>max)
	{
		max = z;
	}
	return max;
}
int main()
{
	int max,a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	max= findmax(a,b,c);
	printf("%d",max);
}
