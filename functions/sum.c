#include <stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
   int ans = n+sum(n-1);
    return ans;
}
int main()
{
	int n;
	printf("Enter renge : ");
	scanf("%d",&n);
	int fact = sum(n);
	printf("%d",fact);
	printf("\n");
	return 0;
}
