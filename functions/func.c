#include <stdio.h>
int main()
{
	int func(int num)
	{
		int c=0;
		while(num)
		{
			c++;
			num >>= 1;
		}
		return(c);
	}
	return 0;
}
