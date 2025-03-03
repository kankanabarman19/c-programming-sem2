#include<stdio.h>
//check whether it is a whole number or not
int main()
{
	float num;
	printf("enter any number:");
	scanf("%f",&num);
	if(num>0 &&(int)num==num)
	{
		printf("the above number %2f is a whole number\n",num);
	}
	else 
	{
		printf("the above number %2f is not a whole number",num);
	}
	return 0;
}
