#include <stdio.h>
#include <string.h>

int is_palindrom(char str[])
{
	int size = strlen(str);
	int str2[size+1];
	for(int i=0,j=size-1;i<size;i++,j--)
	{
		str2[i]=str[j];
	}
	str2[size]='\0';
	
	int f=1;
	for(int i=0;i<size;i++)
	{
		if(str[i]!=str2[i])
		{
			f=0;
			break;
		}
	}
	return f;
}

int main()
{
	char str[30];
	printf("Enter a string: ");
	scanf(" %[^\n]",str);
	if(1 == is_palindrom(str))
	{
		printf("it is a palindrom string\n");
	}
	else{
		printf("it is not a palindrom string\n");
	}
}
