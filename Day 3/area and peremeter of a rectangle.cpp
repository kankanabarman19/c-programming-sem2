#include<stdio.h>
//the area and perimeter of a rectangle
#include<math.h>
int main()
{ 
   float l,b,a,p;
   printf ("Enter the length of the rectangle:");
   scanf ("%f",&l);
   printf ("Enter the breadth of the rectangle:");
   scanf ("%f",&b);
   a=l*b;
   p=2*(l+b);
   printf ("The area of the rectangle is:%f\n",a);
   printf ("The perimeter of the rectangle is :%f",p);
   return 0;   
}
