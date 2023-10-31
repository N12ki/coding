#include <stdio.h>
int main()
{
	int a = 25;
	int* x= &a;  // int* -> int ka address store karta hai
	
	int** y =&x;  // int** -> int* ka address store karta hai
	printf("%d\n",a);  //%p se address print hota hai
	printf("%d\n",*x);
	printf("%d\n",**y);
	return 0;
}
