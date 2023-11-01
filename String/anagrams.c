#include <stdio.h>
#include <string.h>
int main()
{
	char n[100];
	char m[100];
	int c=0;
	scanf("%[^\n]s",n);
	getchar();
	scanf("%[^\n]s",m);
	int size = strlen(n);
	int size2 = strlen(m);
	if(size==size2)
	{
		for(int i=0;i<size;i++)
		{
			if(n[i]!=m[i])
			{
				c=1;
				break;
			}
		}
	}
	if(c==0)
	{
		printf("it is an Anagrams");
	}
	else{
		printf("it is not an Anagrms");
	}
	return 0;
}
