/* If cost price and selling price of an item is input through the keyboard, 
WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.*/


#include<stdio.h>
int main()
{
int cp,sp,profit,loss;
printf("Enter the Cost price of item = Rs.");
scanf("%d",&cp);
printf("Enter the Selling price of item = Rs.");
scanf("%d",&sp);
if(cp>sp)
{
printf("The LOSS incurred by seller is Rs.%d\n",(cp-sp));
}
else if(sp>cp)
{
printf("The PROFIT made by seller is Rs.%d\n", (sp-cp));
}
else
{
printf("Cost price = Selling price => NO Profit NO Loss\n");
}
return 0;
}
