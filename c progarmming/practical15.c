#include<stdio.h>
void main()
{
	char ch;
	
	printf("enter of ch : ");
	scanf("%ch",&ch);
	
	if(ch>='A'&& ch <= 'Z')
	{
		printf("char is capital : %ch",ch);
	}
	else if (ch>='a' && ch<='z')
	{
		printf(" char is small : %ch",ch);
		
	}
	else if (ch>='0'&& ch<='9')
	{
		printf("char is digit : %ch",ch);
	}
	else 
	{
		printf("special character");
	}
}
