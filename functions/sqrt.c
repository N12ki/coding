#include <stdio.h>
//#include <math.h>
int main()
/*{
int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  
  float x = sqrt(4);
  printf("Squre root is :%f",x);
}*/



/*int q=pow(2,6);
printf("%d",q);
return 0;
}*/

{
	float i, t;
	scanf("%f",&t);
	for( i=0;i*i<t;i=i+0.01);
	{
		printf("%.2f",i);
	}
}
