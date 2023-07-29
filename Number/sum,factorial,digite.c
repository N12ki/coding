#include <stdio.h>
int main()
{
   int n,i,s=0,l,j,f;
   scanf("%d",&n);
   for(i=n;i>0;i=i/10)
   {
     l=i%10;
     f=1;
    for(j=l;j>0;j--)
    {
      f=f*j;
    }
    s=s+f;
    }
    if(s==n)
    {
    printf("%d = it is a strong num",s);
    }
    else{
    printf("%d = it is not a strong num",s);
    }
    return 0;
}
   
