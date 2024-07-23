#include<stdio.h>  
int main()    
{    
int x,r,sum=0,b;    
printf("enter the number =");    
scanf("%d",&x);    
b=x;    
while(x>0)    
{    
r=x%10;    
sum=sum+(r*r*r);    
x=x/10;    
}    
if(b==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   