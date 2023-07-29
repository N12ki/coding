#include <stdio.h>
// 1/1!+1/2!+1/3!+1/4!.......1/n!
int main()
{
    double s=0.0,f=1.0;
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
     {
       f=f*i;
     }
     s=s+(1/f);
    }
    printf("sum of serise up to %d : %.2f",n,s);
    return 0;
}
