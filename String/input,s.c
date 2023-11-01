#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char str[n][100];
	for(int i=0;i<n;i++)
	{
	        printf("Enter your name: ");
		scanf("%s" ,str[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%s", str[i]);
		printf("\n");
	}
	return 0;
}
