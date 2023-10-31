#include <stdio.h>
int main()
{
       int s,y,B,netB;
       scanf("%d%d",&s,&y);
       if(y>5)
       {
             B=(s/100)*5;
             netB=B+s;
             printf("%d",netB);
       }
       else
       {
             printf("%d=here is salary you don'n have net bouns",s);
       }
}
