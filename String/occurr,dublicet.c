#include <stdio.h>
#include <string.h>
int main()
{
	char str[40];
	char target;
	puts("Enter a string");
        scanf("%[^\n]s",str);
        getchar();
	printf("Input character: ");
        scanf(" %c", &target);
	int size = strlen(str);
	int i=0,c=0;
	while(str[i]!='\0')
	{
		if(str[i]==target)
		{
			c++;
		}
		i++;
	}
	printf("Output : %d\n",c);
	return 0;
}
