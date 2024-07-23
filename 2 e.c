#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float a,r,c,total;
printf("Enter the area of the circle");
scanf("%f",&a);
r=sqrt(a/3.14);
printf("This is your radius %f\n",r);
c=2*3.14*r*5;
printf("This is your circumference %f",c);
}


