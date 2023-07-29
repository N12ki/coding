#include <stdio.h>

//Write a program to show print the product of n natural numbers, where n is an integer given as input

int main()
{
   int p=1,n,i,a;
   scanf("%d",&n);
   for(i=1;i<=n;++i)
   {
    scanf("%d",&a);
    p=p*a;
   }
   printf("%d",p);
   return 0;
}



//Write a program to show how consecutive even numbers starting from 2 are summed up until the sum just exceeds 1000 and then print the sum and the number of even numbers added.

/*int main()
{
   int i,s=0;
   for(i=2;i<=1000;i=i+2)
   {
   s+=i;
   if(s==1000)
   {
         printf("%d\n",s);
   }
   }   
   return 0;
}*/
