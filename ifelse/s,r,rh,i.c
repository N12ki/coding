#include <stdio.h>
int main()
{ 
     int ab,bc,cd,da,I;
     scanf("%d%d%d%d%d",&ab,&bc,&cd,&da,&I);
     if(ab==cd && cd==da)
     {
       if(I==90)
       {
         printf("square\n");
       }
       else{
          printf("Rhombus\n");
       }
    }
    else if(ab==cd && bc==da)
    {
       if(I==90)
       {
          printf("Rectangle\n");
       }
       else{
          printf("Parallelogram\n");
       }
    }
    else
    {
         printf("Irregular\n");
    }
    return 0;
}
     
