#include <stdio.h>
#include <math.h>
int main() 
{
  long long x;
  int a=0,r,y,sum=0,b;
  printf("Enter an integer: ");
  scanf("%lld",&x);
  
    do 
    {
    x/=10;
    ++a;
    }

while (x!= 0);
printf("Number of digits: %d",a);

        while(y!=0)    
        {    
        r=y%10;    
        sum=sum+pow(r,a);    
        y=y/10;    
        } 

if(b==sum)    
printf("\narmstrong  number ");    
else    
printf("\nnot armstrong number");    
return 0;  
}   
