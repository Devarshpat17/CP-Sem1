#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
long int a,b,c,d,e,f,g,h,i;
printf("Enter Basic Salary:"); 
scanf("%ld",&a); 
b=(50*a)/100;
printf("\n DA:%ld",b); 
c=(10*a)/100;
printf("\n HRA:%ld",c); 
d=(4*a)/100;
printf("\n Medical:%ld",d); 
e=a+b+c+d; 
printf("\n Gross salary:%ld",e); 
f=(5*e)/100; 
printf("\n PF: %ld",f); 
h=(7*e)/100;
printf("\n Insurance: %ld",h);
i=h+f;
printf("\n Deduction %ld",i);  
g=e-i;
printf("\n Net Salary:%ld",g); 

return 0;
}



