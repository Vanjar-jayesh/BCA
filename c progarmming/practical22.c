#include<stdio.h>
void main()
{
	int num,j;
	
	for(num=0; num != 100; num++)
	{
		for(j=2; j<=num; j++)
		{
			if(num % j == 0)
			{
				break;
			}
		}
		
		if(num == j)
		{
			printf("%d\n",num);
		}
	}
}
