#include <stdio.h>
#include <string.h>
/*int main()
{
	char* str = "nikita";
	int x = strlen(str);
	printf("%s",x);
	return 0;
}*/



/*int main()
{
	char s1[15] = "NIKITA HINGMIRE";
	char s2[15];
	strcpy(s2,s1);
	//s2[0]='M';
	printf("%s",s2);
	return 0;
}*/



/*int main()
{
	char s1[17] ="NIKITA\n";   //read only
	char s2[]="HINGMIRE";   //read only
	strcat(s1,s2);
	printf("%s",s1);
	return 0;
}*/



int main()
{
	char str[20] ="NIKITA"; 
        printf("%s\n",str);  
        for(int i=5;i>=3;i--)
        {
            str[i+1] = str[i];
        }
         str[3]='M';
         printf("%s",str);
         return 0;
}

