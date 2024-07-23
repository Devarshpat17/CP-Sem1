#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,sum,div,mod,sub,mul;
    printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
    sum=a+b;sub=a-b;mul=a*b;div=a/b;mod=a%b;
    printf("sum is %d\ndifference is %d\nproduct is %d\nquotient is %d\nmodule is %d",sum,sub,mul,div,mod);
}




