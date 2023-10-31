#include <stdio.h>
int main()
{
   int a,b,c,max,smax;
   scanf("%d%d%d",&a,&b,&c);
   if(a>b)
   {
       max=a;
       smax=b;
   }
   else{
       max=b;
       smax=a;
   }
   if(max>c)
   {
     if(c>smax)
     {
     printf("%d : is a second max\n",c);
     }
     else{
        printf("%d : is second max\n",smax);
     }
  }
   else{
        printf("%d : is second max\n",max);
   }
}


/*int main()
{
   int a,b,c,d,max,smax,max2,smax2;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if(a>b)
   {
       max=a;
       smax=b;
   }
   else{
       max=b;
       smax=a;
   }
   if(d>c)
   { 
       max2=d;
       smax2=c;
   }
   else{
        max2=c;
        smax2=d;
   }
   if(max>max2)
   {
     if(max2>smax)
     {
        printf("%d : is a second max\n",max2);
     }
     else{
        printf("%d : is second max\n",smax);
     }
   }
   else if(max>smax2)
   {
        printf("%d : is a second max\n",max);
   }
   else{
        printf("%d : is second max\n",smax2);
   }
}*/
       
   
