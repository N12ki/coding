#include <stdio.h>
int main()
{
    double CAR;
    int ROCK,TE;
    scanf("%lf",&CAR);
    scanf("%d%d",&ROCK,&TE);
    if(ROCK>50)
    {
      if(CAR>0.7)
      {
        if(TE>5600)
        { 
         printf("Grade 10\n");
        }
      }
   }
   else if(ROCK>50)
   {
         if(CAR>0.7)
        {
          printf("Grade 9\n");
        }
        else {
              printf("Grade 0\n");   
        }
   }
   else if(CAR>0.7)
   {
    if(TE>5600)
    {
       printf("Grade 8\n");
    }
   else{
         printf("Grade 0\n"); 
        }
   }
} 
      
