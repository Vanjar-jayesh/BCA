#include<stdio.h>
void main()
{
	float km,f, m ,i ,c;
	
	printf("Enter of value is km : ");
	scanf("%f",&km);
	
	m = km* 1000;
	f = km* 3280.84;
	i = km*39370;
	c = km * 100000;
	
	printf("meter = %.2f\n",m);
	printf("feet = %.2f\n",f);
	printf("inches = %.2f\n",i);
	printf(" centimeter = %.2f\n",c);
				
	
}
