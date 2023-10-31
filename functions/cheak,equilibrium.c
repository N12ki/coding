#include <stdio.h>
int cheakE(int a[], int n)
{
	int s=0,c=0,t=0;
	for(int i=0;i<n;i++)
	{
		s = s + a[i];
	}
	for(int i=0;i<n;i++)
	{
		s-=a[i];
		if(t==s)
		{
			return 1;
		}
		t+=a[i];	
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(cheakE(a, n))
	{
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
}
