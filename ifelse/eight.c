#include <stdio.h>
int main()
{
	int i,n,j; 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1 || i==n)
			{
				printf("*"" ");
			}	
			if(j==2 || j==3){
			   printf(" "" ");
			}
			else{
			printf("*"" ");
		   }
	   }
	   printf("\n");
       }
       for(i=n-1;i>0;i--)
       {
                  for(int j=1;j<=n;j++)
		  {
			if(i=1)
			{
				printf("*"" ");
			}	
			if(j==2 || j==3){
			   printf(" "" ");
			}
			else{
			printf("*"" ");
		       }
	        }
	        printf("\n");
      }
      return 0;
}
	  
	   
		  
