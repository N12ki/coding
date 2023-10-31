#include <stdio.h>
int factorial(int x){
     int fact=1;
     for(int i=2;i<=x;i++)
     {
     	fact=fact*i;
     }
     return fact;
}
int combi(int n, int r)
{
      int ncr = factorial(n)/(factorial(r)*factorial(n-r));
      return ncr;
}
int main()
{
	int n,i;
	printf("Enter n :");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
	        for(int j=0;j<=n-i;j++)
	        {
	        	printf(" ");
	        }
		for(int j=0;j<=i;j++)
		{
			int icj = combi(i,j);
            		printf("%d ",icj);
            	}
            	printf("\n");
        }
        return 0;
}
