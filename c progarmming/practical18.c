#include<stdio.h>
void main()
{
	int num ,sum=0, gigit;
	int temp;
	
	printf("enter of num : ");
	scanf("%d",&num);
	temp = num;
	
	while ( num > 0 )
	{
		gigit = num % 10;
		sum = sum + gigit;
		num = num/10;
	}
	
	printf("sum of digit : %d is %d",temp , sum);
}
