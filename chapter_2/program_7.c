/*WAP to receive cartesian coordinates (x,y) of a point and convert them into polar 
co-ordinates. */

#include<stdio.h>
#include<math.h>
int main()
{
float x,y;
float r,t;//t=theta
printf("Enter the x coordinate of Cartesian system = ");
scanf("%f",&x);
printf("Enter the y coordinate of Cartesian system = ");
scanf("%f",&y);
r=sqrt(x*x+y*y);
t= atan (y/x);//atan() is used to find the tan inverse.
printf("After converting to polar coordinate system----");
printf("\n(r,theta)=(%f,%f)\n",r,t);
return 0;
}
