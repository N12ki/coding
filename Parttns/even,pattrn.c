#include <stdio.h>

//0
//22
//444
//6666
//88888

/*int main()
{
  int n,i,j,k=0,r;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
  printf("%d",k);
  }
  printf("\n");
  k=k+2;
  }
  return 0;
}*/


//1*2*3*4*5*
//1*2*3*4*
//1*2*3*
//1*2*
//1*

/*int main()
{
  int n,i,j,c=1,k,r;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n-i;j++)
  {
  printf("%d""*",j);
  }
  printf("\n");
  }
  return 0;
}*/


    //1
   //2 5
  //3 5 4
 //4 5 4 3
//5 5 4 3 2 

int main()
{
  int n,i,j,c,k,r;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  c=i;
  for(j=1;j<=n;j++)
  {
  if(j<=n-i)
  {
  printf(" ");
  }
  }
  k=n;
  printf("%d"" ",c);
  for(r=1;r<i;r++)
  {
  printf("%d"" ",k);
  k=k-1;
  }
  printf("\n");
  }
  return 0;
}

//577
//530 485
//442 401 362
//325 290 257 226
//->
/*int main()
{
  int m,n,i,j,c=24;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
  m=c*c+1;
  printf("%d"" ",m);
  c=c-1;
  }
  printf("\n");
  }
  return 0;
}

//1 2 3 4 5
//10 9 8 7 6

/*int main()
{
  int n,i,j,c=1,f,a;
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
  for(j=1;j<=i;j++)
  {
  if(i%2==0)
  {
  if(j<2)
  {
  f=n*i;
  printf("%d"" ",f);
  }
  else{
  a=f-1;
  printf("%d"" ",a);
  }
  }
  printf("%d"" ",c);
  c=c+1;
  }
  if(i%2!=0)
  {
  c=c+n;
  }
  printf("\n");
  }
  return 0;
}*/
