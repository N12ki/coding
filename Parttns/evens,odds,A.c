#include <stdio.h>
//Write a program to create an array of 10 numbers from the user, and sum the elements on odd positions as odds and on even positions as evens.

int main()
{
	int n,i,j,e,o;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++)
		{
			if(i%2==0)
			{
				e=e+arr[i];
			}
			else
			{
				o=o+arr[i];
			}
		}
		printf("evens = %d\n",e);
		printf("odds = %d\n",o);
		return 0;
}
	
	
