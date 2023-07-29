#include <stdio.h>
// 1+4-9+16-36......n sum?

int main()
{
    int n,i,s=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
     if(i%2==0)
     {
       s=s+(i*i);
     }
     else{
         s=s-(i*i);
     }
     }
     printf("sum of serise = %d",s);
     return 0;
}
      
