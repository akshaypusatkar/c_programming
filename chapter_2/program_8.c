/* WAP to receive value of an angle in degrees and check whether sum of squares pf sine and cosine of this angle is equal to 1. */


#include<stdio.h>
#include<math.h>
int main()
{
float angle;
printf("Enter the value of angle in degrees = ");
scanf("%f",&angle);
if(sin(angle)*sin(angle)+cos(angle)*cos(angle)==1)
{
printf("---->TRUE\n");
}
else
{
printf("---->FALSE\n");
}
return 0;
}
