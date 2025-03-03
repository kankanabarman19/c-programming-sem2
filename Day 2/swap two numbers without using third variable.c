#include<stdio.h>
int main()
{
	int a,b;
	a=20;
	b=9;
	printf("value before swap\n");
	printf("a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value after swap\n");
	printf("a=%d b=%d\n",a,b);
	return 0;
}
