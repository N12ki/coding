#include <stdio.h>
/*void greeting(int n){
    if(n==0) return;
    printf("GOOD MORNING\n");
    greeting(n-1);
    return;
}
int main()
{
	int n;
	scanf("%d",&n);
	greeting(n);
	return 0;
}*/




void dec(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    dec(x+1,n);
    return;
}
int main()
{
	int n;
	scanf("%d",&n);
        dec(1,n);
	return 0;
}
