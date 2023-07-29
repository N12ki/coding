#include <stdio.h>
/*int main()
{
	char arr[] ={'H','E','L','L','O'};
	char ch ='\0';  // null character
	printf("%d", ch);
	return 0;
}*/


/*int main()
{
	int i=0;
	while(arr[i]!='\0'){
	printf("%c",arr[i]);
	i++;
	return 0;
}*/



/*int main()
{
	char str[]= "College wallah";
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}
	return 0;
}*/

//Ways of printing particular element
//printf("%c",*(str+i);
//printf("%c",*(i+str);
//printf("%c",i[str]);

/*int main()
{
	char str[]= "College wallah";
	int i=0;
	while(str[i]!='\0'){
		printf("%c",i[str]);
		i++;
	}
	return 0;
}*/

#include <string.h>
/*int main()
{
	char str[]= "Collrge Wallah is best";
	 printf("%s",str);  // phormate specifire we can us this without
	// loop it print our sentence in one short
	puts("Hello Everyone"); // we can use puts for print any string
	return 0;
}*/


int main()
{
	char str[40];
	//scanf("%s",str); 
	gets(str);  // entire sentence can be input
	printf("your input was : %s",str);
	return 0;
}
