/*#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	fgets(str,sizeof(str),stdin);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
			i++;
		}
		else{
			i++;
		}
	}
	printf("Output : ");
	printf("%s",str);
	return 0;
}*/


//witch chareacter is in uppercase we will change it in lowercase and 
//same with lowercase ->
#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char str[n];
	//fgets(str,sizeof(str),stdin);
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
			i++;
		}
		else{
			str[i]=str[i]-32;
			i++;
		}
	}
	printf("Output : ");
	printf("%s",str);
	return 0;
}
