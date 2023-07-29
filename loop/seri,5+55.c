#include <stdio.h>
/*int main()
{
   int i,n,s=0,k=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    k=k*10+5;
    s=s+k;
    printf("%d+",k);
   }
   printf("\nsum=%d",s);
   return 0;
}*/



int main()
{
   int i,n,s=0,k=0,m;
   printf("Enter the number of turms :");
   scanf("%d",&n);
   printf("Enter the number wich you want to add :");
   scanf("%d",&m);
   for(i=1;i<=n;i++)
   { 
     k=k*10+m;
     s=s+k;
     printf("%d+",k);
   }
   printf("\nsum=%d",s);
   return 0;
}

