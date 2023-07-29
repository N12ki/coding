#include <stdio.h>
//Write a program to print the numbers below 100 that are divisible by 7.

/*int main()
{
   int i;
   for(i=1;i<=100;++i){
   if(i%7==0){
   printf("%d\n",i);
   }
   }
   return 0;
}*/
 
   
// Write a program to show how to find all even natural numbers that are divisible by 7 in a given range. (Input lower and upper limit of the range from the user)  
 
 /*int main()
{
   int n,i;
   scanf("%d",&n);
   for(i=2;i<=n;i=i+2){
   if(i%7==0){
   printf("%d\n",i);
   }
   }
   return 0;
}
*/

//Write a program to find the sum of the squares of the first 9 natural numbers that are divisible by 3.

int main()
{
   int i,s=0,sq;
   for(i=1;i<=9;++i)
   {
     sq=i*i;
   if(sq%3==0)
   {
      s+=sq;
      printf("%d\n",sq);
   }
   }
   return 0;
}
