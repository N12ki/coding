#include <stdio.h>
int main()
{
    int i,P,Q,n,s=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Enter the value of P Q :\n");
    scanf("%d%d",&P,&Q);
    for(i=1;i<=n;++i)
    {
    if(i%P==0 && i%Q!=0)
    {
       s+=i;
    }
    }
    printf("%d\n",s);
    return 0;
}
