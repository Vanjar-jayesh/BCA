#include<stdio.h>
void main()
{
	int n1 ,n2 ,n3;
	
	printf("enter of n1 : ");
	scanf("%d",&n1);
	
	printf("enter of n2 : ");
	scanf("%d",&n2);
	
	printf("enter of n3 : ");
	scanf("%d",&n3);
	
	if (n1 > n2)
	{
		if (n1>n3)
		{
			printf(" max : %d",n1);
			
		}
		else{ 
			printf("max : %d",n3);
		}
	}
	else{
		if(n2>n3)
		{
			printf("max : %d",n2);
		}
		else{
			printf("max : %d",n3);
		}
	}
	
}
