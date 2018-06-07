/* Write a menu driven program which has following options:
1.Factorial of number
2. Prime or not 
3. Odd or even 
4. Exit

Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear.
Unless the user selects the 'Exit' option the program should continue to run. */

#include<stdio.h>
int main()
{
int choice,num;
int prod=1;//declaration for factorial.
int i=2;//declaration for prime number.
list: printf("Choices Available :-->\n\t1. Factorial of number\n\t2. Prime or not \n\t3. Odd or even \n\t4. Exit\n");
printf("Enter your choice : ");
scanf("%d",&choice);
switch (choice)
{
case 1: 
	
        printf("You want to find Factorial of number\n");
	printf("Enter the number = ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
	prod = i*prod;
	}
	printf("The Factorial of %d is %d\n",num,prod);
	goto list;
case 2: 
		
	printf("Prime number or not--->\n");
	printf("Enter the number = ");
	scanf("%d",&num);
	while(i<=num-1)
	{	
	if(num!=2)
		{	
		if(num%i==0)
			{
			printf("The number %d is not prime\n",num);
			break;
			}
		else
			{
			printf("The number %d is prime\n",num);
			break;
			}
		}
	if(num==2)
		{
		printf("The number %d is prime",num);			
		}

	}
	goto list;
	
case 3:
	printf("Even number or Odd number--->\n");
	printf("Enter the number = ");
	scanf("%d",&num);
	if(num%2==0)
		{
		printf("The number %d is EVEN number\n",num);
		
		}
	else
		{
		printf("The number %d is ODD number\n",num);
		}
	goto list;

case 4:
	printf("EXITING!\n");
	break;

default :
	printf("Invalid Choice. Select proper choice\n");	
	goto list;

}

return 0;
}
