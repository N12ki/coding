#include <stdio.h>
int perfect(int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		printf("%d is a perfect number",n);
	}
	else{
		printf("%d is not perfect number",n);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int p = perfect(n);
	return 0;
}
