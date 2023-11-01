#include <stdio.h>
#include <string.h>
int main()
/*{
	char color[20];
	printf("Enter your favourite color : ");
	scanf("%s",color);
	printf("your favourite color is: %s",color);
	return 0;
}*/



/*{
	int n;
	scanf("%d",&n);
	getchar();
	char str[n];
	fgets(str, n, stdin);
	printf("you entered : %s",str);
	return 0;
}*/



{
	int n;
	scanf("%d",&n);
	getchar();
	char str[n];
	printf("Enter a string : ");
	//fgets(str, n, stdin);
	scanf("%[^\n]s",str);
	printf("%s",str);
	return 0;
}
