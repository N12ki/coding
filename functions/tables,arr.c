#include <stdio.h>
int storet(int arr[][10], int n, int m, int num)
{
	for(int i=0;i<m;i++)
	{
		arr[n][i]=num*(i+1);
	}
}
int main()
{
	int tables[2][10];
	storet(tables, 0, 10, 2);
        storet(tables, 1, 10, 3);
       	for(int i=0;i<10;i++)
       	{
       		printf("%d\t",tables[0][i]);
       	}
       	printf("\n");
       	for(int i=0;i<10;i++)
       	{
       		printf("%d\t",tables[1][i]);
       	}
       	printf("\n");
       	return 0;
}
		
