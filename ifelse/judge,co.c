#include <stdio.h>
int main()
{
  	int quantity,c,D,T;
  	scanf("%d%d",&quantity,&c);
  	T=quantity*c;
  	if(T>1000)
  	{
    		D=10/100*T;
    		printf("Totle cost is=%d",D);
  	}
  	else
  	{
   		 printf("%d",D);
  	}
}
