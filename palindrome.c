#include<stdio.h>  
int main()    
{    
int x,y,sum=0,a,b=1;   
printf("enter the number =");    
scanf("%d",&x);    
a=x;    
while(x>0)    
{    
y=x%10;    
sum=(sum*10)+y;    
x=x/10;    
}    
if(a==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
} 
 