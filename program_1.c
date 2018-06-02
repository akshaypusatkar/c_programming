/*Ramesh's Basic salary is input through the keyboard.
His dearness allowance is 40% of basic salary & house rent allowance is 20% of basic salary.
WAP to calculate his gross salary*/






#include<stdio.h>

int main()
{
int basic_salary,dearness_allowance,house_rent,gross_salary;
printf("Enter Ramesh's basic salary = ");
scanf("%d",&basic_salary);
dearness_allowance = (basic_salary*40)/100;
house_rent = (basic_salary*20)/100;
gross_salary = (basic_salary)+(dearness_allowance)+(house_rent);
printf("Ramesh's Dearness Allowance = %d\n",dearness_allowance);
printf("Ramesh's house rent = %d\n",house_rent);
printf("Ramesh's Gross Salary = %d\n",gross_salary);
return 0;
}
