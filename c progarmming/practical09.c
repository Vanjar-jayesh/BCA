#include<stdio.h>
void main()
{
	int f;
	float c;
	
	printf("ente of value is f : ");
	scanf("%d",&f);
	
	c = (f-32)/1.8;
	
	printf("centigrade : %.2f\n",c);     
}
