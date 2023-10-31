#include <stdio.h>
int fun(int a[], int n)
{
	for (int i=0;i<n;i++) 
    	{
    		int min=a[i];
    		int mindix=i;
    		for(int j=i+1;j<n;j++)
    		{
    			if(a[j]<min)
    			{
    			min=a[j];
    			mindix=j;
    			}
    		}
    		int t = a[mindix];
    		a[mindix] = a[i];
    		a[i] = t;
    	}
   	 for(int i=0;i<n;i++)
    	{
    		printf("%d",a[i]);
    	}
}
int main() 
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) 
    {
    	if(a[i]==0 || a[i]==1 || a[i]==2)
    	{
        	scanf(" %d",&a[i]);
        }
        else{
        	printf("Invalid string\n");
        }
    }
    fun(a, n);
}
