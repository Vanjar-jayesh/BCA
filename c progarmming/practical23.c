#include<stdio.h>
void main()
{
	int n, i, fact=1;
	
	printf("Enter of number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		fact = fact + i;
	}
	printf("factoical of %d is %d \n",n,fact);
}
