/*#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	char *word= strtok(str, " ");
	char *max=word;
	while(word != NULL)
	{
		if(strlen(word)>strlen(max))
		{
			max = word;
		}
	        word = strtok(NULL," ");
	}
	printf("The longest word is: %s\n",max);
	return 0;
}*/



#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	char word[200];
	char max[200];
	int word,max=0;
	char *token = strtok(NULL," ");
    while(token!= NULL){
	strcpy(word, token);
	word_size=strlen(word);
	
	if(word_size > max)
	{
		strcpy(max, word);
		max = word_size;
	}
	token = strtok(NULL," ");
   }
   printf("The longest word is: %s\n", max);
   return 0;
}
