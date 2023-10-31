#include <stdio.h>
int maze(int n, int m){
	int rw=0;
	int dw=0;
	int total=0;
	if(n==1 && m==1) return 1;
	if(n==1){
		rw+=maze(n,m-1);
	}
	if(m==1){
		dw+=maze(n-1,m);
	}
	if(n>1 && m>1){
		rw+=maze(n,m-1);
		dw+=maze(n-1,m);
	}
	total=rw+dw;
	return total;
}
int main()
{
	int n,m;
	printf("Enter rows : ");
	scanf("%d",&n);
	printf("Enter colums : ");
	scanf("%d",&m);
	int totalways=maze(n,m);
	printf("%d",totalways);
	return 0;
}
