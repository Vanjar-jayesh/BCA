#include<stdio.h>
void main()
{
	int a =1 ,b=1,c,i;
	printf("fibinacci nos :\n");
	printf("%d \n",a);
	printf("%d \n",b);
	
	for(i=1; i<=25; i++)
	{
		c =a+b;
		printf("%d\n",c);
		
		a=b;
		b=c;
		
	}
}
