/* Given the length and breadth of a rectangle , WAP to find whether the area of the rectangle is greater than perimeter. For example, the area of the rectangle with length=5 and breadth=4 is greater than it's perimeter. */

#include<stdio.h>
int main()
{
int length,breadth,area,perimeter;
printf("Enter the length of rectangle = ");
scanf("%d",&length);
printf("Enter breadth of rectangle = ");
scanf("%d",&breadth);
area = length*breadth;
perimeter = (2*(length+breadth));
if(area>perimeter)
		{
		printf("The area of rectangle is greater than it's perimeter.\n");		
		}
else if(area<perimeter)
		{
		printf("The perimeter is greater than it's area.\n");		
		}
else
	{
	printf("The area and perimeter are equal.\n");	
	}

return 0;
}
