#include<stdio.h>
void main()
{
	int n1 ,n2 ,t ;
	
	printf("enter of n1 : ");
	scanf("%d",&n1);
	
	printf("enter of n2 : ");
	scanf("%d",&n2);
	
	t = n1 ;
	
	n1 = n2 ;
	
	n2 = t ;
	
	printf("n1 : %d\n",n1);
	printf("n2 : %d",n2);
}
