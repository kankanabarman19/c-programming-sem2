#include<stdio.h>
int main() 
{
    int num,i,factorial=1;
    printf("Enter a number to find its factorial:");
    scanf("%d",&num);
    for(i=1;i<=num;i++) 
	{
        factorial=factorial*i;
    }
    printf("Factorial of %d is:%d\n",num,factorial);
    return 0;
}
