#include <stdio.h>
/*int main()
{
	char s1[] = "Physics Wallah";
	//char* s2 = s1; //s2 is a shallow copy
	//s1[0] = 'M';
	// deep copy ->
	char s2[] = "Physics Wallah" ;
	s2[0] = 'M'; 
	printf("%s\n",s1);
	printf("%s",s2);
	return 0;
}*/

/*int main()
{
	char* s1 ="Physics Wallah\n";
	char* s2;
	s2 = s1;
	printf("%s",s1);
        printf("%s",s2);
        return 0;
}*/

// deep copy =>
int main()
{
	char s1[]= "Physics Wallah";
	int size =0;
	int i=0;
	while(s1[i]!='\0')
	{
		size++;
		i++;
	}
	char s2[size];
	for(int j=0;j<size;j++)
	{
		s2[j]=s1[j];
	}
	printf("%s\n",s1);
	printf("%s\n",s2);
	return 0;
}
