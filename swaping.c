#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int m,n,t,x,y,choice;
     printf("\n1:Swapping with temporary variable."); 
    printf("\n2:Swapping without temporary variable.");
    printf("\nEnter your choice (1,2):");
    scanf("%d",&choice);

     if(choice==1)
     {
    printf("enter 2 values :"); 
    scanf("%d%d",&m,&n); 
    printf( "\nvalues before interchanging:\nvalue of m=%d\nvalue of n=%d",m,n);
    t=m;m=n;n=t; 
    printf("\nvalues after interchanging:\nvalue of m=%d\nvalue of n=%d",m,n);
     }
else
{
 int x,y;  
  printf("Enter the value of x and y");  
  scanf("%d%d",&x,&y);  
  printf("before swapping numbers: %d%d\n",x,y);  
  x=x+y;   
  y=x-y;    
  x=x-y;  
  printf("After swapping:%d%d",x,y); 
} 
return 0;
}


