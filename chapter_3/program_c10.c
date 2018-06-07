/* Given three points (x1,y1),(x2,y2) and (x3,y3), write a program to check if all the three points fall on one straight line. */

/*strategy:-> if slope is same then it lies on straight line. Here we are not calculating slope in conventional way because if two x coordinates are same the "Floating point exception" error will come as divide by 0 will occur.*/


#include<stdio.h>
int main()
{
int x1,y1,x2,y2,x3,y3;
printf("Enter the coordinates of 1st point = ");
scanf("%d%d",&x1,&y1);
printf("Enter the coordinates of 2nd point = ");
scanf("%d%d",&x2,&y2);
printf("Enter the coordinates of 3rd point = ");
scanf("%d%d",&x3,&y3);
if((y2-y1)*(x3-x1)==(y3-y1)*(x2-x1))
	{
	printf("Points lie on same line.\n");
	}
else
	{
	printf("Points are not lying on same line.\n");
	}
return 0;
}

