/*The distance between two cities(in Km.) is input through the keyboard. 
WAP to convert and print this distance in meters,feet,inches & centimeters.*/


#include<stdio.h>
int main()
{ 
float km,cm,inch,feet;
printf("Enter the distance in km =");
scanf("%f",&km);
inch = km*39370.1;
feet = km*3280.84;
cm   = km*1000*100;
printf("The distance in inches = %f\n",inch);
printf("The distance in foot = %f\n",feet);
printf("The distance in centimeters = %f\n",cm);
return 0;
}
