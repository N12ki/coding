#include <stdio.h>
#include <string.h>
int main()
{
	char str[40];
	char target;
	puts("Enter a string");
        scanf("%[^\n]s",str);
	printf("Input character: ");
        scanf(" %c", &target);
        int size = strlen(str);
        int j=0;
        for(int i=0;i<size;i++)
        {
        	if(str[i]!=target)
        	{
        		str[j++]=str[i];
        	}
        }
        str[j]='\0';
        puts("Output : ");
        puts(str);
        return 0;
}
