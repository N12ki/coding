#include <stdio.h>
int main()
{
    int n,i,max=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a);
      if(a>max)
      {
       max=a;
      }
      else{
        max=max;
      }
    }
    printf("%d",max);
    return 0;
}
      
