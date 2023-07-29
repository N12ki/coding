#include <stdio.h>
#include <string.h>
#include <ctype.h>
//Function in string 

/*int main()
{
	char* str ="how are you ?";
	int length = strlen(str);
	printf("%d",length);
	return 0;
}*/
  
  
  
/*int main()
{
	char s1[15] = "Nikita Hingmire";
	char s2[15];
	strcpy(s2,s1,3);
	printf("%s",s2);
	return 0;
}*/


/*int main()
{
	char s1[20] = "nikita ";
	char s2[] ="Hingmire";
	strcat(s1,s2);
	printf("%s",s1);
	return 0;
}*/

//insert a new element in a string 

/*int main()
{
	char str[20]="College";
	printf("%s\n",str);
	for(int i=6;i>=2;i--){
	   str[i+1]=str[i];
	}
	str[2]='k';
	printf("%s",str);
	return 0;
}*/



/*int main()
{
	char s1[] = "apple";
	char s2[] ="apple orange";
	if(strcmp(s1,s2)==0)
	{
	  printf("string are equal ");
	}
	else{
	  printf("not equle ");
	}
	return 0;
}*/



/*int main()
{
	char str[] ="Hello world";
	char str2[] ="world";
	char* result = strstr(str,str2);
	if(result != NULL)
	{
	   printf("%s",str);
	}
	return 0;
}*/



/*int main()
{
	char str[]=" hi i am nikita";
	for(int i=0;str[i]!='\0';i++)
	{
	str[i] = toupper(str[i]);
	}
         printf("%s ",str);
	 return 0;
}*/



/*int main()
{
	char str[]="HELLO HOW ARE YOU ?";
	for(int i=0;str[i]!='\0';i++)
	{
	str[i] = tolower(str[i]);
	}
         printf("%s ",str);
	 return 0;
}*/


int main()
{
	char source[] = "Hello";
	char destination[20];
     strncpy(destination, source, 3); // Now 'destination' contains "Hel"
     printf("%s",destination);
}

