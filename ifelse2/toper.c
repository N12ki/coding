#include <stdio.h>
int main()
{
  char A,B;
  int h,m,c,s,e,a,b,AP,BP,j,k,l,o,n;
  printf("enter marks of 1 student:\n");
  scanf("%c",&A);
  scanf("%d%d%d%d%d",&h,&m,&c,&s,&e);
  printf("enter marks of 2 student:\n");
  scanf("%c",&B);
  scanf("%d%d%d%d%d",&j,&k,&l,&o,&n);
  a=h+m+c+s+e;
  printf("total1=%d\n",a);
  b=h+m+c+s+e;
  printf("total2=%d\n",b);
  AP=a/500*100;
  printf("percentege of A=%d\n",AP);
  BP=b/500*100;
  printf("percentege of B=%d\n",BP);
  if(AP=BP){
  printf("BOTH ARE TOPPER=%d%d\n",AP,BP);
  }
  else{
  if(a>b){
  printf("B=IS TOPPER",);
  }
  else{
  printf("A=IS TOPPER",);
  }
 }
}
