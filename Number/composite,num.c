#include <stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       {
          c++;
       }
       }
       if(c>2)
       {
        printf("%d= is a composite number\n",n);
       }
       else{
        printf("%d= it is not a composite number\n",n);
       }
       return 0;
}
       
      
    
