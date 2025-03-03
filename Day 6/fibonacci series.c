#include<stdio.h>
int main()
{
	int a=0,b=1,n,s=0,i;
	printf ("Enter the number of terms :");
	scanf("%d",&n);
	printf ("Fibonacci Series :");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a);
		s=a+b;
		a=b;
		b=s;
	}
    return 0;
}
