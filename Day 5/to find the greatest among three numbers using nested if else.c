#include <stdio.h>
//Find Maximum Among Three Numbers Using Nested if-else
int main() 
{
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b) 
        {
        if (a>c) 
                {
            printf("Maximum number is: %d\n",a);
        } 
                else 
                {
            printf("Maximum number is: %d\n",c);
        }
    } 
        else 
        {
        if (b>c) 
                {
            printf("Maximum number is: %d\n",b);
        } 
                else 
                {
            printf("Maximum number is: %d\n",c);
        }
    }
    return 0;
}
