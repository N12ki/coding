#include <stdio.h>
/*int main()
{
   int n,r,i,s;
   scanf("%d",&n);
   for(i=n;i>0;i=i/10)
   {
     r=i%10;
     s=s*10+r;
   }
   if(s==n)
   {
       printf("%d = it is a palindrome number",s);
   }
   else{
       printf("%d = it is not a palindrome number",s);
   }
   return 0;
}*/


int main()
{
    	int m,n,i,j,s,r;
    	scanf("%d%d",&m,&n);
    	for(i=m;i<=n;i++)
    	{ 
    	         s=0;
       		 for(j=i;j!=0;j=j/10)
        	{
          	        r=j%10;
            		s=s*10+r;
       	        }
      	        if(s==i)
       		{
         	     printf("%d ",i);
        	}
       }
       return 0;
}
