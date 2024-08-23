#include<stdio.h>
void main()
{
	int i,even = 0, odd =0 ; 
	
	for(i=1; i<=100; i++)
	{
		if(i % 2 == 0)
		{
			even = even + i;
		}
		else
		{
			odd = odd+i;
		}
	}
	printf("sum of 10 number is even : %d\n",even);
	printf("sum of 10 number is odd : %d\n",odd);
}
