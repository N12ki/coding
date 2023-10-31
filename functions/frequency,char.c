/*#include <stdio.h>
int freqFun(char str[], char k)
{
	int c=0;
	for(int j=0;str[j]!='\0';j++)
	{
		if(str[j]==k)
		{
			c++;
		}
	}
	printf("%c Found in %d Times\n",k,c);
}
int main()
{
	char str[50];
	char k;
	printf("enter the string : ");
	scanf("%s",str);
	
	printf("Input Character :");
	scanf(" %c",&k);
	freqFun(str, k);
	return 0;
}*/



#include <stdio.h>
#include <string.h>
int pfun(char str[], char p[], int str_len,int p_len)
{
	int c=0;
	for(int i=0;i<=str_len;i++)
	{
		int j=0;
		while(j<p_len)
		{
			if(str[i+j]!=p[j])
			{
				break;
			}
			j++;
		}
		if(j==p_len)
		{
			c=1;
			break;
		}
	}
}
int main()
{
	char str[50];
	printf("enter the string : ");
	scanf("%s",str);
	
	char p[10];
	printf("enter pattern : ");
	scanf("%s",p);
	
	int str_len = strlen(str);
	int p_len = strlen(p);
	int c = pfun(str, p, str_len, p_len);
	if(c==1)
	{
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}
