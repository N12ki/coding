#include <stdio.h>
int main()
{
	int cw,ew,T;
	scanf("%d%d",&cw,&ew);
	T=cw+ew;
	if(cw>=20)
	{
	       if(ew>=20)
	       {
		   if(T>=45)
		   {
		     printf("PASS");
		   }
		   else if(T<=44)
		   {
		       printf("MOD PASS");
		   }
		   else{
		   printf("FAIL");
		   }
	      }
	      else{
		if(T>=45)
		{
		   T=44;
		   printf("Technical FAIL");
		}
		else{
		   printf("FAIL");
		}
	       }
	}
	else if(ew>=20){
	if(T>=45){
	T=44;
	printf("Technical FAIL");
	}
	}
	else{
	     printf("FAIL");
	}
	return 0;
}
