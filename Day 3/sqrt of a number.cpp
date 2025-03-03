#include<stdio.h>
//calculating square root of a number 
#include<math.h>
int main()
{
	float a,b;
	printf ("Enter the number :");
	scanf ("%f",&a);
	b=sqrt(a);
	printf ("The square root of the given number is :%2f\n",b);
	return 0;
}
