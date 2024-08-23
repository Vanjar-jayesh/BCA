#include<stdio.h>
void main()
{
	int n1 , n2;
	int sub,add,multi;
	float d;
	
	printf("Enter of n1 : ");
	scanf("%d",&n1);
	
	printf("Enter of n2 : ");
	scanf("%d",&n2);
	
	add = n1 + n2 ;
	sub = n1- n2;
	multi = n1*n2;
	d = n1/n2;
	
	printf("add : %d\n",add);
	printf("sub : %d\n",sub);
	printf("multi : %d\n",multi);
	printf("dvi : %.2f\n",d);
}
