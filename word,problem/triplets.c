#include <stdio.h>
int main()
{
	int n,i,j,k;
	int total=0;
	scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			for(k=j+1;k<=n;k++)
			{
				if(i+j+k==n)
				{
					total++;
					printf("(%d,%d,%d)\n",i,j,k);
				}
			}
		}
	}
    printf("%d\n",total);
    return 0;
}
