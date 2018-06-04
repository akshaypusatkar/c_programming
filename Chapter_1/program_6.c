#include<stdio.h>
int main()
{
float c,d,temp;
printf("Enter the value to be stored at loaction C = ");
scanf("%f",&c);
printf("Enter the value to be stored at loaction D =");
scanf("%f",&d);
printf("After interchanging the contents of C and D");
temp = c;
c = d;
d = temp;
printf("\nThe Contents of C after interchanging = %f ", c);
printf("\nThe Contents of D after interchanging = %f ", d);
return 0;
}
