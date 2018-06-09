/*WAP to find the grace marks for a student using SWITCH. The user should enter the class obtained by the student and the number of subjects he has failed in. Use the following logic:
	
	-- If the student gets first class and the number of subjects he failed in is greater than 		   3, then he does not get any grace. Otherwise the grace is of 5 marks per subject.
  
	-- If the student get second class and the number of subjects he failed in is greater than 		   2, then he does not get any grace. Otherwise the grace is of 4 marks per subject.

	-- If the student gets third class and the number of subjects he failed is in greater than 		   1, then he does not get any grace. Otherwise the grace is of 5 marks. */


#include<stdio.h>
int main()
{
int class,fs;//fs=no. of failed subjects.
printf("Enter the class obtained by student(Enter 1 for 1st class , 2 for 2nd class and 3 for 3rd class) = " );
scanf("%d",&class);
printf("No. of subjects student has failed = ");
scanf("%d",&fs);
switch(class)
	{
	case 1:
		if(fs>3)
			{
			printf("No Grace Marks\n");			
			}
		else
			{
			if(fs==1)
				{	
				printf("Total Grace marks obtained is 5\n");
				}
			else if(fs==2)
				{
				printf("Total Grace Marks obtained is 10\n");
				}
			else if(fs==3)
				{
				printf("Total Grace marks obtained is 15\n");
				}
			}
		break ;
	case 2:
		if(fs>2)
			{
			printf("No Grace Marks\n");
			}
		else 	
			{
			if(fs==1)
				{	
				printf("Total Grace marks obtained is 4\n");
				}
			else if(fs==2)
				{
				printf("Total Grace Marks obtained is 8\n");
				}
			}

		break ;
	case 3:
		if(fs>1)
			{
			printf("No Grace marks\n");
			}
		else
			{
			if(fs==1)
				{	
				printf("Total Grace marks obtained is 5\n");
				}
			}
	       break;
	}
return 0;
}
