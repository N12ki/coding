#include <stdio.h>
#include <string.h>
int main()
{
	char str[20];
	puts("Enter a string");
	scanf("%s",str);
	int size = strlen(str);
	char str2[size+1];
	for(int k=0,j=size-1;k<size;k++,j--)
	{
		str2[k] = str[j];
	}
	str2[size] = '\0';
	int flag=1;
	for(int i=0;i<size;i++){
	   if(str[i] != str2[i])
	   {
	   	flag=0;
	   	break;
	   }
	}
	if(flag==1)
	{
	   printf("%s is a palindrom",str);
	}
	else{
	    printf("%s is not a palindrom",str);
	}
	return 0;
}

// with functions

/*#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
*/
