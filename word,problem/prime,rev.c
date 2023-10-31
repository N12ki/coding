#include <stdio.h>
int main()
{
	int n,i,j,c=0,c2=0,k;
	scanf("%d",&n);
    int	s=0,r=0;
		for(j=1;j<=n;j++)
		{
			if(n%j==0)
			{
			  c++;
			}
		}
		for(k=n;k>0;k=k/10)
        {
            r=k%10;
            s=s*10+r;
        }
        for(i=1;i<=s;i++)
        {
            if(s%i==0)
            {
               c2++;
            }
        }
        if(c2==c && c==2)
        {
        	printf("%d and %d both are prime number",n,s);
        }
        else if(c==2){
            printf("%d is a prime number",n);
        }
        else{
            printf("%d is a prime number",s);
        }
}
