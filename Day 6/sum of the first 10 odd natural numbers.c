#include<stdio.h>
//Sum of first 10 odd natural number
int main() 
{
    int sum=0,i;
    for(i=1;i<=20;i+=2) 
	{
        sum=sum+i;
    }
    printf("The sum of the first 10 odd natural numbers is:%d\n",sum);
    return 0;
}

