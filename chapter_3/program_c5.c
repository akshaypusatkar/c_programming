/* A five digit number is entered through the keyboard. WAP to obtain the reversed number and to determine whether the original and reversed numbers are equal or not. */

#include<stdio.h>
int main()
{
int num,s5=0,s4=0,s3=0,s2=0,s1=0,rev;
printf("Enter the number = ");
scanf("%d",&num);
s5=num%10;
s4=((num-s5)/10)%10;
s3=((num-10*s4-s5)/100)%10;
s2=((num-100*s3-10*s4-s5)/1000)%10;
s1=((num-1000*s2-100*s3-10*s4-s5)/10000)%10;
rev = (10000*s5+1000*s4+100*s3+10*s2+s1);
printf("The reversed number is %d.\n",rev);
if (rev==num)
	{	
	printf("The original number and reversed number are both equal.\n");
	}
else if (rev!=num)
	{
	printf("The original number and reversed number are not equal.\n");	
	}
return 0;
}
