#include<stdio.h>
int main()
{
float f,c;
printf("The temperature in Farenheit = ");
scanf("%f",&f);
c = (f-32)*0.5556;
printf("The temperature in centigrade = %f",c);
return 0;
}
