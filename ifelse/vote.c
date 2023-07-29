#include <stdio.h>
int main()
{
  int Age;
  printf("Enter the Age");
  scanf("%d",&Age);
  if(Age>=18){
  printf("You are eligible for vote\n");
  }
  else{
  printf("You are not eligible\n");
  }
}
