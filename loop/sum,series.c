#include <stdio.h>
int main()
{
    int i,n;
    double s=0.0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      s+=1.0/i;
    }
    printf("sum of the series is : %.2f\n",s);
    return 0;
}
