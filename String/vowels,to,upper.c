#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	printf("Enter string : ");
	fgets(str,sizeof(str),stdin);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i'           || str[i]=='o' || str[i]=='u')
		{
		 	str[i]=str[i]-32;
		 	i++;
		}
		else{
			i++;
		}
	}
	printf("Output :\n");
	printf("%s",str);
	return 0;
}
