#include <stdio.h>
int sum(int arr[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=arr[i];
	}
	return s;
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
	int result = sum(arr,n);
	printf("%d",result);
}
