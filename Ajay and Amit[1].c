#include <stdio.h>
#include <stdlib.h>
int main()
{
int a;
printf("Enter X ");
scanf("%d",&a);

if(a%10==0)
    {
        printf("You have won the game in 0 attempt");
    }
else if(a%5==0&&a%2!=0)
{
    printf("You have won the game in 1 attempt");
}
else
{
    printf("You have won the game in -1 attempt");
}
}
