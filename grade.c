#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter marks ");
	scanf("%d",&a);

    if(a>=90&&a<=99)
    {
        printf("your grade is A+");
    }
    else if(a>=80&&a<=89)
    {
    printf("your grade is A");
    }
    else if(a>=70&&a<=79)
    {
    printf("your grade is B+");
    }
     else if(a>=60&&a<=69)
    {
    printf("your grade is B");
    }
    
    else if(a>=40&&a<=59)
    {
    printf("your grade is C+");
    }
    else if(a>=30&&a<=39)
    {
    printf("your grade is D");
    }
        else
        {
            printf("fail");
        }

}