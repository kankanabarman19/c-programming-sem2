#include<stdio.h>
// Calculate the sum of squares of the first 10 natural numbers
int main() 
{
    int sum=0,i;
    for(i=1;i<=10;i++) 
	{
        sum=sum+i*i;
    }
    printf("The sum of the squares of the first 10 natural numbers is:%d\n",sum);
    return 0;
}

