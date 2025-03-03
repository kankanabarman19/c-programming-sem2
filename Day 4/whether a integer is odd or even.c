#include<stdio.h>
//check whether an integer is even or odd
int main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("the above number is even");
	}
	else
	{
		printf("the above number is odd");
	}
	return 0;
}
