#include <stdio.h>
int main()
{
    int a,b,i,HCF,LCM,p,r;
    printf("Enter a number :\n");
    scanf("%d%d",&a,&b);
    p=a*b;
    while (b!=0){
    r=a%b;
    a=b;
    b=r;
    }
    HCF=a;
    LCM=p/HCF;
    printf("HCF=%d\nLCM=%d\n",HCF,LCM);
    return 0;
}


/*int main()
{
    int m,n,HCF,r,p;
    printf("Enter a number :\n");
    scanf("%d%d",&m,&n);
    p=m*n;
    while (n!=0){
    r=m%n;
    m=n;
    n=r;
    }
    HCF=m;
    printf("%d",HCF);
    return 0;
}*/
