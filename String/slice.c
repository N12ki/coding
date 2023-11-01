#include <stdio.h>
#include <stdio.h>
int sclice(char str[], int n, int m)
{
	char new[100];
	int j=0;
	for(int i=n;i<=m;i++,j++)
	{
		new[j]=str[i];
	}
	new[j]='\0';
	puts(new);
}
int main()
{
	char str[100];
	scanf("%s",str);
	int n,m;
	scanf("%d%d",&n,&m);
	sclice(str, n, m);
}
