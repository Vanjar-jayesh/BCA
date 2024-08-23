#include<stdio.h>
void main()
{
	int n,i,max,min;
		
		for(i=1; i<=10;i++)
		{
			printf("enter of number : ");
			scanf("%d",&n);
			if(i == 1){
			
			max = n;
			min = n;
	}
		else 
		{
	
			if(n > max)
			{
				max = n;
			}
			if(n< min )
			{
				min = n;
			}
			
		}
	}
	printf("max : %d \n",max);
	printf("min : %d",min);
		
}
