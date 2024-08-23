#include<stdio.h>
void main()
{
	int r ;
	float pi= 3.14;
	float area;
	
	printf("Enter of r : ");
	scanf("%d",&r);
	
	area = pi * r * r;
	
	printf("area : %.2f",area);
}
