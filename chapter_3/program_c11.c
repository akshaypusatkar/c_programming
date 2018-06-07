/* Given the coordinates (x,y) of center of a circle and its radius, WAP which will determine whether a point lies inside the circle, on the circle or outside the circle. */

#include<stdio.h>
#include<math.h>
int main() 
{
float xc,yc,xp,yp,d,r,a;//d is distance between point and center.
printf("Enter the radius of circle = ");
scanf("%f",&r);
printf("Enter the cordinates of center of circle = ");
scanf("%f%f",&xc,&yc);
printf("Enter the cordinates of point = ");
scanf("%f%f",&xp,&yp);
d=(pow((xc-xp),2)+pow((yc-yp),2));
if(d<r)
	{	
	printf("Point lies inside circle.\n");
	}
else if(d>r)
	{
	printf("Point lies outside the circle.\n");			
	}		
else 
	{
	printf("Point lie on the circle");
     	}		
return 0;		
}
