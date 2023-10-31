#include <stdio.h>
int main()
{
	int n,i,j;
	int total=0;
	scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
                {
				if(i+j==n)
				{
					total++;
					printf("(%d,%d)\n",i,j);
				}
		}
	}
        printf("%d\n",total);
        return 0;
}
