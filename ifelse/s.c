#include <stdio.h>
#include<string.h>
int main()
{
      char n[100];
      printf("enter the name of City:\n");
      scanf("%[^\n]%*c", n);
      printf("%s", n);
      if(n=="Delhi")
      {
           printf("Red Fort\n");
      }
      else if(n=="agara")
      {
           printf("Taj Mahal\n");
      }
      else 
      {
           printf("Jal Mahal\n");
      }
      return 0;         
}
