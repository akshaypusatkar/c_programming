/* If a five digit number is input through the keyboard , write a program to reverse the number */

#include<stdio.h>
int main()
{
int num,r_num,s1,s2,s3,s4,s5;
printf("Enter the number to be reversed = ");
scanf("%d",&num);
s1 = num % 10;//unit's place digit
s2 = ((num-s1)/10) % 10;//ten's place digit
s3 = ((num-s2*10-s1)/100) % 10;//hundred's place digit
s4 = ((num-s3*100-s2*10-s1)/1000) % 10;//thousand's place digit
s5 = ((num-s4*1000-s3*100-s2*10-s1)/10000) % 10;//ten thousand's place digit
r_num = 10000*s1 + 1000*s2 + 100*s3 + 10*s4 + s5;
printf("The reversed number is %d",r_num);
return 0;
} 
