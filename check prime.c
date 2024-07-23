#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,i;
    printf("Enter number");
    scanf("%d",&num);
    for(i=2;i<=(num-1);i++)
    {
        if(num%i==0)
        {
            printf("Not a Prime number");
            break;
        }
    }
        if(i==num)
        {
            printf("Number is Prime");
        }
return 0;
}
