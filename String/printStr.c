#include <stdio.h>
#include <string.h>
/*void printstr(char str[])
	{
		int i=1;
		while(str[i]!='\0')
		{
			printf("%c",str[i]);
			i++;
		}
		printf("\n");
	}
	int main()
	{
		char s[34];
		printf("Enter the string:\n");
		getch(s);
		printf("Using custom function\n");
		printstr(s);
		printf("Using printf %s\n",s);
		printf("Using puts: \n");
		puts(s);
		return 0;
	}*/
	
	
int main()
{
	char str[] = "College Wallah";
	char* ptr = str;   // ptr now points to str[0]
	int i=0;
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
		i++;
	}
	return 0;
}

