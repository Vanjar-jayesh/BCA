#include<stdio.h>
void main()
{
	int n1 , n2 , n3;
	
	printf("Enter of n1 : ");
	scanf("%d",&n1);
	
	printf("Enter of n2 : ");
	scanf("%d",&n2);
	
	printf("Enter of n3 : ");
	scanf("%",&n3);
	
	if (n1>n2 && n1> n3)
	{
		printf("n1 is largest ");
		
	}
	else if (n2>n3 && n2 >n1)
	{
		printf("n2 is largest");
	}
	else
	{
		printf("n3 is largest\n");7
	}
}
