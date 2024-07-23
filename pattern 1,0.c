#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;

    for(i=0;i<=4;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=i;j++)
                printf("%d",j%2);
        }
        else
        {
             for(j=1;j<=i;j++)
                printf("%d",(j+1)%2);

        }
        printf("\n");

    }

}