#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int a,b,c,d,num;

printf("Press 1 for Clerk\nPress 2 for Teacher\nPress 3 for Principal");
scanf("%d",&num);
switch(num)
{
case 1:
printf("Enter Hours");
scanf("%d",&a);
    if(a<=44)
        {
            b=100*a;
            printf("salary is %d",b);
        }
    else if (a>44&&a<=50)
        {
            c=((a-44)*200)+(44*100);
            printf("salary is %d",c);
        }
    else
        {
            d=44*100;
            printf("salary is %d",d);
        }
break;
case 2:
printf("Enter Hours");
scanf("%d",&a);
    if(a<=44)
        {
            b=200*a;
            printf("salary is %d",b);
        }
    else if (a>44&&a<=50)
        {
            c=((a-44)*400)+44*200;
            printf("salary is %d",c);
        }
    else
        {
            d=44*200;
            printf("salaryis %d",d);
        }
break;
case 3:
printf("Enter Hours");
scanf("%d",&a);
    if(a<=44)
        {
            b=400*a;
            printf("salary is %d",b);
        }
    else if (a>44&&a<=50)
        {
            c=((a-44)*800)+(44*400);
            printf("salary is %d",c);
        }
    else
        {
            d=44*400;
            printf("salaryis %d",d);
        }
break;
}
}
