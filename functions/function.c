#include <stdio.h>
void myFunction(char name[]){
	printf("Welcome %s\n",name);
}
int main(){
myFunction("Hello");
myFunction("Hi!");
myFunction("Bay");
return 0;
}
