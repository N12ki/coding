#include <stdio.h>
void england(){
printf("You are in England\n");
return;
}
void australia(){
printf("You are in australia\n");
england();
return;
}
void india(){
printf("You are in India\n");
australia();
return;
}
int main()
{
  india();
  return 0;
}

//if we use void fun() this function then we can move our stetment any were.


/*void fun(){
printf("Hello\n");
}
int main()
{
 void fun();
 fun();
 return 0;
}*/
