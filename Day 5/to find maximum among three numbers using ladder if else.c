#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b&&a>c)
	{
		printf("a");
	}
	else if(b>a&&b>c)
	{
		printf("b");
	}
	else
	{
		printf("c");
	}
	return 0;
}
