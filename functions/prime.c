#include <stdio.h>
int prime(int n)
{
	int c=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{ 
		printf("%d is a prime",n);
	}
	else{
		printf("%d is not a prime",n);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int p = prime(n);
	return 0;
}
