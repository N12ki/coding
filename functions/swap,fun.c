#include <stdio.h>
void swap(int* x, int* y){
      int temp;
      temp = *x;//temp =2
      *x = *y;  //a=9
      *y = temp;  // b=2
      return;
}
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int* x = &a;
	int* y = &b;
	swap(&a,&b);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	return 0;
}
