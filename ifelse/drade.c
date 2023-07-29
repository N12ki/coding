#include <stdio.h>
int main()
{
     int ph,c,b,m,ch,s,P;
     printf("enter the value of subjects :\n");
     scanf("%d%d%d%d%d",&ph,&c,&ch,&m,&b);
     s=ph+c+m+b+ch;
     P=s/5;
     if(P>=90)
     {
            printf("Grade A\n");
     }
     else if(P>=80)
     {
            printf("Grade B\n");
     }
     else if(P>=70)
     {
             printf("Grade C\n");
     }
     else if(P>=60)
     {
             printf("Grade D\n");
     }
     else if(P>=40)
     {
             printf("Grade E\n");
     }
     else if(P<40)
     {
             printf("Grade F\n");
     }
  return 0;
}
