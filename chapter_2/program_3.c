/* If a four digit number is input through the keyboard, WAP to obtain the sum of the first and last digit of this number*/

#include<stdio.h>
int main()
{
int num,s1,s2,s3,s4;
printf("Enter the number = ");
scanf("%d",&num);
s1 = num % 10;
s2 = ((num -s1)/10)%10;
s3 = ((num-10*s2-s1)/100)%10;
s4 = ((num-100*s3-10*s2-s1)/1000)%10;
printf("The of first and last digit is %d",(s4+s1));
return 0;
}
