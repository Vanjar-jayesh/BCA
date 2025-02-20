

#include<stdio.h>
void main()
{
	float i;
	int r,p,n;
	
	printf("Enter of value r : ");
	scanf("%d",&r);
	
	printf("Enter of value p : ");
	scanf("%d",&p);
	
	printf("Enter of value n : ");
	scanf("%d",&n);
	
	i = p*r*n/100;
	
	printf("interest : %.2f\n",i);
}
