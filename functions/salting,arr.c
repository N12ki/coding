#include <stdio.h>
#include <string.h>
int salting(char password[])
{
	char salt[]="123";
	char newpass[200];
	
	strcpy(newpass, password);
	strcat(newpass, salt);
	puts(newpass);
}
int main()
{
	char password[100];
	scanf("%s", password);
	salting(password);
}
