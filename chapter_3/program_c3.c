/* Any year is input through the keyboard. WAP to determine whether the year is leap or not.(Use the %(modulus) operator.) */

#include<stdio.h>
int main()
{
int year;
printf("Enter the year = ");
scanf("%d",&year);
if (year%4==0)
{
printf("The year %d is LEAP year.\n",year);
}
else
{
printf("The year %d is NON LEAP year.\n",year);
}
return 0;
}

