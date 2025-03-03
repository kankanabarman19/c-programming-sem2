#include<stdio.h>
//finding greatest among two integer 
int main()
{
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	if (a>b)
	{
		printf("the number %d is greater than the number %d\n",a,b);
	}
	else
	{
		printf("the number %d is greater than the number %d",b,a);
	}
	return 0;
}
