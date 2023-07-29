#include <stdio.h>
int main()
{
    int x,y,z,s,sum,a,b;
    scanf("%d%d%d",&x,&y,&z);
    if(x==y==z)
    {
        printf("equilateral\n");
    }
    else if(x!=y!=z)
    {
        printf("scalene\n");
    }
    else if(x==y && y==z && z==x)
    {
        printf("isosceles\n");
    }
    sum=x*x+y*y;
    s=y*y+z*z;
    a=z*z;
    b=x*x;
    if(sum==a && s==b)
    {
        printf("Right angled triangle\n");
    }
    else{
         printf("Invalid\n");
    }
}
