#include <stdio.h>
#include <stdbool.h>
bool is_even(int n)
{
	if(n%2==0) 
	{
		return true;
	}
	else{
		return false;
    }
}	
int main()
{
	int n;
	scanf("%d",&n);
	if(is_even(n)){
		printf("%d is even\n",n);
	}
	else{
		printf("%d is odd\n",n);
    }
    return 0;
}



