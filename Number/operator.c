#include <stdio.h>
//Left shift op
//when bits are shifted left then trailing positions are
//filled with zeros.
/*int main()
{
	char var = 3;  //Note: 3 in binary = 0000 0011
	printf("%d\n",var<<1);
	return 0;
}*/

/*lefting is equivalent to multiplication by pow(2,right operand)
     var = 3;
     var<<1        output : 6 [3*powI(2,1)]
     var<<4        output : 48 [3*pow(2,4)]*/
     
  
// Right shift

//when bits are shifted right then leading positions are
//filled with zeros.

int main()
{
	char var = 3;  //Note: 3 in binary = 0000 0011
	printf("%d\n",var>>1);
	return 0;
}
 
/*Right shifting is equivalent to division by pow(2,right operand)
     var = 3;
     var<<1        output : 6 [3/powI(2,1)]
     var<<4        output : 48 [3/pow(2,4)]*/
     
