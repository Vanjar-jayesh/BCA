#include<stdio.h>
void main()
{
	int num;
	
	printf("Enter of num : ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("num is a positive : %d",num);
		
	}
	else if (num<0)
	{
		printf("num is a negative : %d",num);
	}
	else 
	{
		printf("num is a zero");
	}
}
