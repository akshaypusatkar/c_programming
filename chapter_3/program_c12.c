/* Given a point (x,y), WAP to find out if it lieson the x axis, y axis or on the origi, viz.(0,0). */

#include<stdio.h>
int main()
{
float x,y;
printf("Enter the coordinates of point = ");
scanf("%f%f",&x,&y);
if((x==0)&&(y!=0))
		{
		printf("The point lies on Y-axis.\n");		
		}
else if((x!=0)&&(y==0))
		{
		printf("The point lies on X-axis.\n");
		}
else if((x==0)&&(y==0))
		{
		printf("The point is origin or lies on origin.\n");		
		}
else if((x!=0)&&(y!=0))
		{
		printf("The point lies in free space.\n");		
		}
return 0;
}
