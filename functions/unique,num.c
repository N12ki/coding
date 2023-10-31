#include <stdio.h>
int unique(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				c=1;
			}
		}
		if(c==0)
		{
			printf("%d ",arr[i]);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	unique(arr,n);
	return 0;
}
