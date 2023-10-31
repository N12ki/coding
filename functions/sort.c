#include <stdio.h>
/*int funsort(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
	    for(int j=i;j>0;j--)
	    {
	    	if(a[j-1]>a[j])
	    	{
	    		int temp =a[j-1];
	    		a[j-1]=a[j];
	    		a[j]=temp;
	    	}
	    }
	}
  	for(int i=0;i<n;i++)
    {
 		printf("%d ",a[i]);
    }
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	funsort(a, n);
	return 0;
}*/




int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] < a[i+1])
		{
			c++;
		}
	}
	if(c==n)
	{
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
