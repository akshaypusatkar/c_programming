/*Write a function that receives marks received by a student in 3 subjects and returns the average and percentage of these marks. Call this function main() and print the results in main(). */
/* strategy==>Solve using the concept of call by reference. */

#include<stdio.h>
void avg_perc(float * ,float *);
int main()
{ 
float avg,per; 
float *a,*p;
a=&avg;
p=&per;
avg_perc(&avg,&per);
printf("The average marks scored is %f and percentage is %f.\n",avg,per);
return 0;
}
void avg_perc(float *a, float *p)
{
int s1,s2,s3;
printf("Enter the marks received in three subjects(Maxm Marks is 100) = ");
scanf("%d %d %d",&s1,&s2,&s3);
*a = (s1+s2+s3)/3.0; 
*p = ((s1+s2+s3)/300.00)*100;
}
