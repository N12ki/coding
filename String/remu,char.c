#include <stdio.h>
#include <string.h>
int main()
{
	char str[40];
	char target;
	char new[100];
	int j=0;
	puts("Enter a string");
	scanf("%[^\n]s",str);
	scanf("%s",&target);
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]!=target)
		{
			new[j]=str[i];
			j++;
		}
	}
	new[j]='\0';
	printf("%s\n",new);
	return 0;
}
			
		 	
