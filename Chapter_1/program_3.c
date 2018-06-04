#include<stdio.h>
int main()
{
int sb1,sb2,sb3,sb4,sb5,total;
float agreegate,percent;
printf("Enter the marks of 1st subject = ");
scanf("%d",&sb1);
printf("\nEnter the marks of 1st subject = ");
scanf("%d",&sb2);
printf("\nEnter the marks of 1st subject = ");
scanf("%d",&sb3);
printf("\nEnter the marks of 1st subject = ");
scanf("%d",&sb4);
printf("\nEnter the marks of 1st subject = ");
scanf("%d",&sb5);
total = (sb1+sb2+sb3+sb4+sb5);
agreegate = total/5;
percent = (total*100)/500;
printf("Agreegate marks obtained = %f",agreegate);
printf("Marks in percent(%) = %f ",percent);
return 0;
}
