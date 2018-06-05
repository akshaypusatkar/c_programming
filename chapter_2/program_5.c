/* If a five digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits. For example, if the number that is input is 12391, then the output should be displayed as 23501 */

#include<stdio.h>
int main()
{
int num;
printf("Enter the five digit number = ");
scanf("%d",&num);
num = num+11111;
printf("number after operation = %d", num);
return 0;
} 
