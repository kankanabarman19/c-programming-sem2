#include<stdio.h>
//finding compound interest
#include<math.h>
int main()
{
	float p,r,t,a,ci;
	printf("enter the principle amount:");
	scanf("%f",&p);
	printf("enter the rate of interest:");
	scanf("%f",&r);
	printf("enter the time period interms of years:");
	scanf("%f",&t);
	a=p*pow((1+r/100),t);
	ci=a-p;
	printf("the compound interest of the given amount:%f/n",ci);
	printf("the total amount(compound interest+principle amount)is:%f",a);
	return 0;
}
