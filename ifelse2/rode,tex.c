#include <stdio.h>
int main()
{
     int c,tex;
     printf("enter the cost of bike :\n");
     scanf("%d",&c);
     if(c>100000)
     {
          tex=15/100*c;
          printf("%d",tex);
     }
     else if(c>50000 && c<=100000)
     {
          tex=10/100*c;
          printf("%d",tex);
     }
     else if(c<=50000)
     {
          tex=5/100*c;
          printf("%d",tex);
      }
}
