#include <stdio.h>
int main()
{
     int l,b,A,P;
     printf("enter value of length breadth:\n");
     scanf("%d%d",&l,&b);
     A=l*b;
     P=2*(l+b);
     if(A>P)
     {
          printf("Area is greater\n");
     }
     else if(A==P)
     {
         printf("Both are greater\n");
     }
     else
     {
          printf("Perimeter is greater\n");
     }
}
