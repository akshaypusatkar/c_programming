#include<stdio.h>
int main()
{
float sp_15,sp,profit,cp;
printf("The Selling price of 15 items = ");
scanf("%f",&sp_15);
printf("The total profit earned on 15 items = ");
scanf("%f",&profit);
cp = (sp_15 - profit);
printf("The Cost Price of 1 item = %f", (cp/15));
return 0;
}
