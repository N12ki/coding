#include <stdio.h>
int main()
{
     char c;
     double d;
     int A,B,sb,m,s;
     printf("enter the operator:\n");
     scanf("%c",&c);
     printf("enter number of A,B:\n");
     scanf("%d%d",&A,&B);
     
     if(c=='+'){
          s=A+B;
             printf("%d\n",s);
          }
     else if(c=='-'){
          sb=A-B;
             printf("%d\n",sb);
          }
     else if(c=='/'){
          d=A/B;
             printf("%lf\n",d);
          }
          else{
          m=A*B;
          printf("%d\n",m);
          }
           return 0;
} 
