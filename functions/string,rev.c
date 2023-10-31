#include <stdio.h>
#include <string.h>
void findrev(char str[], int size)
{
	for(int i=0,j=size-1;i<j;i++,j--)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
        puts(str);
}
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int i=0;
	char size=0;
	while(str[i]!='\0')
	{
		size++;
		i++;
	}
	/*char size =strlen(str);*/
	findrev(str,size);
	return 0;
}
