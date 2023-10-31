#include <stdio.h>
int pascal(int n)
{
	int s;
	for(int i=0;i<=n;i++)
	{
		int s=1;
		for(int j=0;j<=i;j++)
		{
			printf("%d",s);
			s=s*(i-j)/(j+1);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	pascal(n);
	return 0;
}
