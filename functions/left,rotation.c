#include <stdio.h>
int rotate(int a[], int k,int n)
{
	printf("Array after %d rotations: \n", k);
	for(int i=k;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(int i=0;i<k;i++)
	{
		printf("%d",a[i]);
	}
}
		
int main()
{
	int n,k;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	rintf("Enter the value of k: ");
	scanf("%d",&k);
	rotate(a, k, n);
	return 0;
}
