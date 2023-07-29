#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,k,s,p;
    scanf("%d%d",&n,&k);
    i=1;
    while(i<=n)
    {
     int p=pow(i,k);
      s=s+p;
      i=i+1;
    }
    printf("sum = %d",p);
    return 0;
}
