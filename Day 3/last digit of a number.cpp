#include<stdio.h>
//finding the last digit of a number
int main()
{
	int number,lastdigit;
	printf ("Enter a number:");
	scanf ("%d",&number);
	lastdigit=number-(number/10)*10;
	printf ("The lastdigit of the number is:%d\n",lastdigit);
	return 0;
}
