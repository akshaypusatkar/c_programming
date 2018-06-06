/*Any integer is input through the keyboard. WAP to find out whether it is an odd number or even number. */

#include<stdio.h>
int main()
{
int num;
printf("Enter the number = ");
scanf("%d",&num);
(num%2==1)?printf("The Number %d is ODD\n",num) : printf("The Number %d is EVEN\n",num);
return 0;
}
