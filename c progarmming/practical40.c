#include<stdio.h>
void main()
{
	int r,i,j;
	
	printf("Enter of rows : ");
	scanf("%d",&r);
	
	for(i=1; i<=r; i++)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d",j % 2);
			
		}
		printf("\n");
	}
}
