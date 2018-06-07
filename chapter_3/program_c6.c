/* If the ages of Ram, Shyam and Ajay are input through the keyboard, WAP to detrmine the youngest of the three. (Same as smallest number between three numbers)*/

#include<stdio.h>
int main()
{
int ra,sa,aa;//ra=ram's age,sa=shyam's age,aa=ajay's age
printf("Enter the age of Ram = ");
scanf("%d",&ra);
printf("Enter the age of Shyam = ");
scanf("%d",&sa);
printf("Enter the age of Ajay = ");
scanf("%d",&aa);
if(ra<sa)
	{
	if(ra<aa)
		{
		printf("Ram is youngest among three.\n");		
		}
	else if(aa<ra)
		{
		printf("Ajay is youngest among three.\n");		
		}
	}
else if(sa<ra)
	{
	if(sa<aa)
		{
		printf("Shyam is youngest among three.\n");
		}
	else if(sa>aa)
		{
		printf("Ajay is youngest among three.\n");
		}

	}
return 0;	

}
