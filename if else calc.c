#include<stdio.h>

int main()
{
    int a,b,c;
    int num,x,y;
    
    /////choice/////
    printf("Press 1 for addition\nPress 2 for subtraction\nPress 3 for division\nPress 4 for multiplication\nPress 5 for modulus");
    scanf("%d",&num);
    /////taking values/////
    printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
    
        if(num == 1)
        {
            c=a+b;
            printf("sum is %d",c);
        }
        else if(num == 2)
        {
            c=a-b;
            printf("difference is %d",c);
        }
        else if(num == 3)
        {
            c=a/b;
            printf("quotient is %d",c);
        }
        else if(num == 4)
        {
            c=a*b;
            printf("product is %d",c);
        }
        else if(num == 5)
        {
            printf("Enter first number: ");
	        scanf("%d",&x);
	        printf("Enter second number: ");
	        scanf("%d",&y);
            c=x%y;
            printf("module is %d",c);
        }
        else
        {
            printf("invalid choice");
        }
}
    