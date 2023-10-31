#include <stdio.h>
int is_even(int arr[], int n)
{
	printf("Even numbers: [ ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
	}
	printf("]\n");
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
	is_even(arr,n);
	return 0;
}
