#include <stdio.h>
#include <limits.h>
int main()
{
   int n,i,j;
   printf("Enter size of array :");
   scanf("%d",&n);
   int arr[n];
   int max=INT_MIN;
   int smax=INT_MAX;
   int thmax=0;
   for(i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
   if(arr[i]>max){
   thmax=smax;
   smax=max;
   max=arr[i];
   }
   else if(arr[i]>smax && max!=arr[i]){
   thmax=smax;
   smax=arr[i];
   }
   else if(arr[i]>thmax && smax!=arr[i]){
   thmax=arr[i];
   }
   }
   printf("third = %d\n",thmax);
   return 0;
}
