/* Consider a currency sysytem in which thera are notes of seven denominations,namely, Re.1, Rs.2,Rs.5,Rs.10,Rs.50,Rs.100. If a sum of Rs. N is entered through the keyboard, write a program to complete the smallest number of notes that will combine to give Rs.N. */

#include<stdio.h>
int main()
{
int paise,rs,r1,r2,r5,r10,r50,r100;
printf("Enter the amount = ");
scanf("%d",&rs);
paise = rs*100;
r100 = paise / 10000;
r50 = (paise-(r100*100*100))/5000;
r10 = (paise-(r100*100*100)-(r50*50*100))/1000;
r5 = (paise-(r100*100*100)-(r50*50*100)-(r10*10*100))/500;
r2 = (paise-(r100*100*100)-(r50*50*100)-(r10*10*100)-(r5*5*100))/200;
r1 = (paise-(r100*100*100)-(r50*50*100)-(r10*10*100)-(r5*5*100)-(r2*2*100))/100;
printf("No. of Rs. 100 notes = %d",r100);
printf("\nNo. of Rs. 50 notes = %d",r50);
printf("\nNo. of Rs. 10 notes = %d",r10);
printf("\nNo. of Rs. 5 notes = %d",r5);
printf("\nNo. of Rs. 2 notes = %d",r2);
printf("\nNo. of Rs. 1 notes = %d",r1);
return 0;
}
