#include <stdio.h>
int main()
{  
      int A,SUM,a,b,c,d,e,f,g,h,i;
      scanf("%d",&A);
       if(A>=2000)
      {
        a=A/2000;
        A=A%2000;
        printf("\nTotal Number of 2000 note :%d",a);
      }
      if(A>=500)
      {
        b=A/500;
        A=A%500;
        printf("\nTotal Number of 500 note :%d",b);
      }
      if(A>=200)
      {
        c=A/200;
        A=A%200;
        printf("\nTotal Number of 200 note :%d",c);
      }
      if(A>=100)
      {
        d=A/100;
        A=A%100;
                printf("\nTotal Number of 100 note :%d",d);
      }
      if(A>=20)
      {
        e=A/20;
        A=A%20;
                printf("\nTotal Number of 20 note :%d",e);
      }
      if(A>=10)
      {
        f=A/10;
        A=A%10;
        printf("\nTotal Number of 10 note :%d",f);
      }
      if(A>=5)
      {
        g=A/5;
        A=A%5;
                printf("\nTotal Number of 5 note :%d",g);
      }
      if(A>=2)
      {
        h=A/2;
        A=A%2;
        printf("\nTotal Number of 2 note :%d",h);
      }
      if(A>=1){
        i=A/1;
        printf("\nTotal Number of 1 note :%d",i);
      }
      SUM=a+b+c+d+e+f+g+h+i;
      printf("\nTotal number of notes : %d\n",SUM);
      return 0;
 }
        
