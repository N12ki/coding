/*#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("a=%d b=%d",a,b);
}*/




#include <stdio.h>
int main()
{ 
     int x,y,SUM;
     printf("enter value of x y:\n");
     scanf("%d%d",&x,&y);
     SUM=x+y;
     if(SUM>15 && SUM<=20){
          printf("20\n");
     }
}
