/* WAP to find the absolute value of a number entered through the keyboard. */

#include<stdio.h>
int main()
{
float num;
printf("Enter the number = ");
scanf("%f",&num);
if (num>0)
	{
	printf("The absolute value of %f (|%f|) is %f.\n",num,num,num);
	}
else if(num<0)
	{
	printf("The absolute value of %f (|%f|) is %f.\n",num,num,(0-num));	
	}
else if(num==0)
	{
	printf("The Absolute value is 0.\n");	
	}
return 0;
}
