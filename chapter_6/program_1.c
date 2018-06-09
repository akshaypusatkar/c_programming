/* Write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers. Call this function from main() and print results in main(). */

#include<stdio.h>
#include<math.h>
float avrg(int);
float std_dev(float,int,int,int,int,int);
int sum(int,int,int,int,int);
int main()
{
int num1,num2,num3,num4,num5,s;
float avg,sd;
printf("Enter five numbers = ");
scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
s = sum(num1,num2,num3,num4,num5);
printf("The sum of five numbers is %d\n",s);
avg = avrg(s);
printf("The average of five numbers is %f\n",avg);
sd = std_dev(avg,num1,num2,num3,num4,num5);
printf("The standard deviation is %f\n",sd);
return 0;
}
int sum(int x1,int x2,int x3,int x4,int x5)
{
int add;
add = x1+x2+x3+x4+x5;
return (add);
}
float avrg(int total)
{
float a;
a = total/5.0;
return a;
}
float std_dev(float a,int num1,int num2,int num3,int num4,int num5)
{ 
float q;
q=pow(((num1-a)*(num1-a)+(num2-a)*(num2-a)+(num3-a)*(num3-a)+(num4-a)*(num4-a)+(num5-a)*(num5-a))/5,0.5);

return q;
}
