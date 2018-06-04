#include<stdio.h>
int main()
{
	float l,b,r,ac,cc,ar,pr;
	printf("Enter the length of rectangle = ");
	scanf("%f",&l);
	printf("\nEnter the breadth of rectangle = ");
	scanf("%f",&b);
	printf("\nEnter the radius of circle = ");
	scanf("%f",&r);
	ar = l*b;
	pr = 2*(l+b);
	ac = 3.14*r*r;
	cc = 2*3.14*r;
	printf("\nThe area of rectangle = %f",ar);
	printf("\nThe perimeter of rectangle = %f",pr);
	printf("\nThe area of circle = %f",ac);
	printf("\nThe circumference of circle = %f",cc);
	return 0;
	
}
