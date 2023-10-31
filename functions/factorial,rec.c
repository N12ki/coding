#include <stdio.h>
/*int factorial(int n){
    if(n==1 || n==0) return 1;
   int ans = n*factorial(n-1);
    return ans;
}
int main()
{
	int n,i;
	printf("Enter renge : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	int fact = factorial(i);
	printf("%d",fact);
	printf("\n");
	}
	return 0;
}*/



int fact(int n)
{
	if(n==1 || n==0) 
	return 1;
	else {
		int f = n*fact(n-1);
		return f;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int result = fact(n);
	printf("%d",result);
}
