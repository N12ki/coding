#include <stdio.h>
//Multiple calls
int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fibo(n));
	return 0;
}
