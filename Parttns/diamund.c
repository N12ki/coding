#include <stdio.h>
//----1
//---2-2
//--3-3-3
//-4-4-4-4
//5-5-5-5-5
//-4-4-4-4
//--3-3-3
//---2-2
//----1


int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n-i)
			{
				printf(" ");
		    }
		    else
		    {
		    	printf("%d"" ",i);
		    }
		}
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n-i)
			{
				printf(" ");
		    }
		    else
		    {
		    	printf("%d"" ",i);
		    }
		}
		printf("\n");
	}
	return 0;
}
