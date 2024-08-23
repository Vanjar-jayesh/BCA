#include<stdio.h>
void main()
{
	int l,b,h,r,c;
	float t;
	
	printf("Enter of value of l : ");
	scanf("%d",&l);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("Enter the value of h : ");
	scanf("%d",&h);
	
	r = l*b*h;
	t = (l*b)*0.5;
	c = l * l * l;
	
	printf("rectangle : %d\n",r);
	printf("triangle : %.2f\n",t);
	printf("cube : %d\n",c);
}
