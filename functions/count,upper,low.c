#include <stdio.h>
#include <string.h>
void count(char str[], int size)
{
	int c=0,c2=0;
	for(int i=0;i<size;i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			c++;
		}
		else /*if(str[i]>='a' && str[i]<='z')*/
		{
			c2++;
		}
	}
	printf("No.of uppercase characters:%d\n",c);
	printf("No.of lowercase characters:%d\n",c2);
}
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int size = strlen(str);
	count(str,size);
	return 0;
}


