#include <stdio.h>
int rev(int arr[], int a,int b, int n)
{
	for(int i=a,j=b;i<j;i++,j--)
	{
		arr[i]=arr[i]+arr[j];
		arr[j]=arr[i]-arr[j];
		arr[i]=arr[i]-arr[j];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
int main()
{
	int n,a,b;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&a,&b);
	rev(arr, a, b, n);
	return 0;
}
