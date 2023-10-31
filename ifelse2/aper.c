#include <stdio.h>
/*int main()
{
  int l,b,A,P;
  scanf("%d%d",&l,&b);
  A=l*b;
  P=2*(l+b);
  printf("Area=%d Perimeter=%d",A,P);
return 0;
}*/


int main()
{
    int DD,mm,yyy;
    scanf("%d%d%d",&DD,&mm,&yyy);
    if(yyy>0 && DD>0)
    {
    
      if(mm>1 && mm<12)
      	{
      	if(DD>1 && DD<31)
        {
          printf("%d",DD);
          printf("/");
          printf("%d",mm);
          printf("/");
          printf("%d\n",yyy);
          printf("date is valid\n");
          
        }
        
        else 
        {   printf("invalid");
        }
        }
      else 
      {
          printf("invalid");
          }
    }
    else 
    {  
        printf("invalid");
    }


}
    

