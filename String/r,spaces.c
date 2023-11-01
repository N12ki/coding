#include <stdio.h>
#include <string.h>
int main()
{
	//int n;
	printf("enter size of string : ");
	//scanf("%d",&n);
	char str[100];
	//scanf("%s",str);
	fgets(str, sizeof(str), stdin);
	int size=strlen(str);
	int i,j;
	for(i=0,j=0;i<size;i++)
	{
		if(str[i]!=' ')
		{
			str[j++]=str[i];
		}
	}
	str[j]='\0';
	printf("Output : ");
	printf("%s",str);
	return 0;
}
