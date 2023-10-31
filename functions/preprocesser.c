#include <stdio.h>

#define x 234
int main(void)
{
	int a;
	a=4*x;
	printf("%d\n",a);
	//#undef x;
	#ifndef 
	printf("Hello");
	#else
	printf("%d",x);
}


/*#define x 234
int main(void)
{
	#if def x
	printf("Hello");
	#else
	printf("Hi");
	#endif
}*/
