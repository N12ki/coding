#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d",&n);
    char name[n][50];
    int i;
    for(i=0;i<n;i++)
    {
      printf("Enter your name: ");
      scanf("%s", name[i]);
    }
    for(i=0;i<n;i++)
    {
       printf("Hello %s!\n", name[i]);
    }
    return 0;
}



/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("How many names do you want to print: ");
    scanf("%d", &n);

    char** names = (char**)malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        names[i] = (char*)malloc(50 * sizeof(char));
        printf("Enter name %d: ", i + 1);
        scanf("%49s", names[i]);
    }

    printf("Names entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
        free(names[i]);
    }

    free(names);
    return 0;
}
*/
