/* WAP to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees. */

#include<stdio.h>
int main()
{
float a1,a2,a3;
printf("Enter the 1st angle of triangle = ");
scanf("%f",&a1);
printf("Enter the 1st angle of triangle = ");
scanf("%f",&a2);
printf("Enter the 1st angle of triangle = ");
scanf("%f",&a3);
if(a1+a2+a3==180)
		{
		printf("The traingle with given angles is a VALID triangle.\n");
		}
else
		{
		printf("The traingle with given angles is a INVALID triangle.\n");
		}
return 0;
}
