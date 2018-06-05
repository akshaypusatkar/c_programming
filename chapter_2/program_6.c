/* If lengths of three sides of triangle are input through the keyboard, WAP to find area of the triangle. */

#include<stdio.h>
#include<math.h>

int main()
{
float a,b,c,temp,s,area;// s=semiperimeter
printf("Enter 1st side = ");
scanf("%f",&a);
printf("Enter 2nd side = ");
scanf("%f",&b);
printf("Enter 3rd side = ");
scanf("%f",&c);
s = (a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of triangle is %f",area);
return 0;
}

