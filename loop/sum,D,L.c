#include <stdio.h>
int main()
{
    int n,s=0,r,i;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
     r=i%10;
     s=s+r;
    }
    printf("%d",s);
    return 0;
 }
     
     
   // Write a program to show the logic of obtaining the reversed form of a given whole number. (Input the number from the user) 

/*int main()
{
    int n,s=0,i,r;
    scanf("%d",&n);
    for(i=n;i>0;--i)
    {
      printf("%d\n",i);
    }
    return 0;
}*/
