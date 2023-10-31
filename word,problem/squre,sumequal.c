#include <stdio.h>
int main()
{
	int n,i,j,rev=0,a,r,t=0,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
	    s=s+a*a;
	    for(j=a;j>0;j=j/10)
	    {
	    	r=j%10;
	    	rev=rev*10+r;
	    }
	    t=t+rev*rev;
	}
   if(s==t)
   {
       printf("YES");
   }
     printf("not equal");
     return 0;
}
