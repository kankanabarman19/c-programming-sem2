#include<stdio.h>
//finding if a coin is head or tail
int main()
{
	char ch;
	printf("enter a uppercase character");
	scanf("%C",&ch);
	if (ch=='H')
	{
		printf("the coin is head");
	}
	else
	{
		printf("the coin is tail");
	}
	return 0;
}
