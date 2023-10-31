#include<stdio.h>
int main()
{
	float f;
	printf("Enter a real number :");
	scanf("%f",&f);
	int x = (int)f;
	float a = (float)x;
	if(f-a == 0)
		printf("Number is integer");
	if(f-a > 0)
	       printf("Number is not integer");
	return 0;
}
