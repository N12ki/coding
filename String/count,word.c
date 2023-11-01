#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	getschar();
	char str[n];
	printf("Enter a sentence : ");
	fgets(str,sizeof(str),stdin);
	int wc=0;
	int c=1;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='\n' || str[i]==' ' || str[i]=='\t')
		{
	        	if(!wc){
	        	    c=0;
	        	    wc++;
	                }
	        }else{
	        	c=1;
	        }
	}
	printf("Number of words is : %d\n",wc);
	return 0;
}
