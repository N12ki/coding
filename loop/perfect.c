#include <stdio.h>
int main()
{
   int i,n,s;
   scanf("%d",&n);
   s=0;
   for(i=1;i<n;i++)
   {
    	if(n%i==0)
   	{
     		s=s+i;
    	}
   }
   if(s==n)
   {
  	 printf("%d = it is a perfect number",s);
   }
   else
   {
   	printf("%d = it is not a perfect number",s);
   }
   return 0;
}
