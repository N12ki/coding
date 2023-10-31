#include <stdio.h>
int main()
{
    int Day,C;
    scanf("%d",&Day);
    if(Day<=5){
    C=Day*2;
    printf("%d",C);
    }
    else if(Day>=10)
    {
    C=(Day-5)*3+(2*5);
    printf("%d",C);
    }
    else if(Day<=15)
    {
    C=(2*5)+3*5+(Day-10)*4;
    printf("%d",C);
    }
    else if(Day>15)
    {
    C=(2*5)+(3*5)+(4*10)+(Day-15)*5;
    printf("%d",C);
    }
    else
    {
    printf("No Charg");
    }
    return 0;
 }
