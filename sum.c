#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int a,b,c,d,e,f,m,n,o,num,xx,yy,p;
float x,y,z;
printf("Press 1 for addition\nPress 2 for multiplication\nPress 3 for division\nPress 4 for subtraction\nPress 5 for modulus");
scanf("%d",&num);
switch(num)
{
        case 1:
        printf("enter  number 1 to be added ");
        scanf("%d",&a);
        printf("\nenter  number 2 to be added");
        scanf("%d",&b);
        c=a+b;
        printf("\nsum is %d",c);
        break;
    
    case 2:
    printf("\n enter  number 1 to be multiplied ");
    scanf("%d",&d);
    printf("\n enter  number 2 to be multiplied");
    scanf("%d",&e);
    f=d*e;
    printf("\n product is %d",f);
    break;


        case 3:
        printf("\nenter  number 1 to be divided ");
        scanf("%f",&x);
        printf("\nenter  number 2 to be divided");
        scanf("%f",&y);
        z=x/y;
        printf("\nquotient  is %.1f",z);
        break;
        
case 4:
printf("\n enter  number 1 to be subtracted ");
scanf("%d",&m);
printf("\n enter  number 2 to be subtracted");
scanf("%d",&n);
o=m-n;
printf("\n difference is %d",o);
break;
case 5:
printf("\n enter  number 1 ");
scanf("%d",&xx);
printf("\n enter  number 2 ");
scanf("%d",&yy);
p=xx%yy;
printf("\n modulus is %d",p);
break;


}
return 0;




}