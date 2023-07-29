#include <stdio.h>
int main()
{
     double HRA,DA,S,GS;
     printf("enter the salary of an employee :\n");
     scanf("%lf",&S);
     if(S<=10000)
     {
          HRA=(S*20)/100;
          DA=(S*80)/100;
          GS=HRA+DA+S;
     }
     else if(S<=20000)
     {
          HRA=(S*25)/100;
          DA=(S*90)/100;
          GS=HRA+DA+S;
     }
     else 
     {
          HRA=(S*30)/100;
          DA=(S*95)/100;
          GS=HRA+DA+S;
     }
     printf("%lf",GS);
     return 0;
}
