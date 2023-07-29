#include <stdio.h>
/*int main()
{
    int Y;
    scanf("%d",&Y);
    if(Y%4==0 && Y%100!=0)
    {
     if(Y%400==0)
     {
        printf("%d :Year is leap year",Y);
     }
    }
    else {
            printf("entered year is Not a leap year");
    }
}*/



/*int main()
{
    int Y;
    scanf("%d",&Y);
    if(Y%100==0)
    {   
        printf("%d : is divisible by 100 ",Y);
    }
    else{
         printf("%d : Year is Not divisible by 100",Y);
    }
}*/


int main()
{
    int Y;
    scanf("%d",&Y);
    if(Y%400==0)
    {   
        printf("%d : is divisible by 400 ",Y);
    }
    else{
         printf("%d : Year is Not divisible by 400",Y);
    }
}
