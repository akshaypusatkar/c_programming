 /*If a five digit number is input through the keyboard, write a program to calculate the sum of it's digits.*/ 


#include<stdio.h>
int main()
{
int num,sum,s1,s2,s3,s4,s5;
printf("Enter the Five digit number = ");
scanf("%d",&num);
s1 = num % 10;
s2 = ((num-s1)/10) % 10;
s3 = ((num-s2*10-s1)/100) % 10;
s4 = ((num-s3*100-s2*10-s1)/1000) % 10;
s5 = ((num-s4*1000-s3*100-s2*10-s1)/10000) % 10;
sum = s1+s2+s3+s4+s5;
printf("The sum of five digits is %d",sum);
return 0;
}
