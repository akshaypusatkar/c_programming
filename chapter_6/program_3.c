/* A 5-digit positive integer is entered through the keyboard, write a recursive and a non recursive function to calculate sum of digits of the 5-digit number. */
/* Strategy==> Using Recursion only. */

#include<stdio.h>
int add_dig(int);
int main()
{
int num,result;
printf("Enter the number = ");
scanf("%d",&num);
result = add_dig(num);
printf("The sum of digits in %d is %d.\n",num,result);
return 0;
}
int add_dig(int num)
{
if(num!=0)
	{
	return (num%10+add_dig(num/10)); 	
	}
else
	{
	return 0;
	}
}
