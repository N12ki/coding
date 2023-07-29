#include <stdio.h>
int main()
{
    int n,i=1,k,a=0,p;
    printf("Enter how many terms you want :");
    scanf("%d",&n);
    for(p=1;p<=n;p=p+1)
    {
      printf("%d\n",k);
      a=i;
      i=k;
      k=i+a;
    }
    return 0;
}
