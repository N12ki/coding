#include <stdio.h>
int main()
{
  int n,m,i,j,c=0,s=0;
  scanf("%d%d",&m,&n);
  for(i=m;i<=n;i++)
  {
   for(j=1;j<=i;j++)
   {
    if(i%j==0)
    {
     c=c+1;
    }
   }
   if(c==2)
   {
    s=s+i;
   }
  }
  printf("%d",s);
  return 0;
}
  
  


/*int main()
{
 	 int n,m,i,j,s=0;
 	 scanf("%d%d",&m,&n);
 	 for(i=m;i<=n;i++)
 	 {
 	 	 s=0;
 		 for(j=1;j<i;j++)
    	 {
  				if(i%j==0)
				{
					s=s+j;
			    }
   		}
  		if(s==i)
  		{
  			printf("%d\n",s);
  		}
  	}
    return 0;
}*/
