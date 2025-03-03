#include<stdio.h>
int main()
{
	int a,b,c;
	a=19;
	b=11;
	printf("value before swap\n");
	printf("a=%d\n b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("value after swap\n");
	printf("a=%d\n b=%d",a,b);
	return 0;
}
