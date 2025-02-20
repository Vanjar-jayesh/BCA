

#include<stdio.h>
void main()
{
	float pi = 3.14;
	float area,volume;
	int r;
	
	printf("Enter of vlaue r : ");
	scanf("%d",&r);
	
	area = 4*pi*r*r;
	volume = 4/3*pi*r*r*r;
	
	printf("area = %.2f\n",area);
	printf("volume = %.2f",volume);
}
