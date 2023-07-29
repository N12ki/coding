      #include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N%5==0)
    {
     if(N%11==0)
     { 
       printf("%d: is divisible by Both ",N);
     }
     else{
         printf("%d : is divisible by 5",N);
     }
    }
    else if(N%11==0)
    {
       printf("%d : is divisible by 11",N);
    }
    else{
        printf("None of them ");
    }
}
