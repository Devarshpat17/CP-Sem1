#include<stdlib.h>
#include<stdio.h>

int main()
{
    int i,j,k,t;
    for(i=1;i<=4;i++)
    {

        for(j=3;j>=i;j--)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf(" *");
        }
        if(i!=0)
        {
            for(t=1;t<i;t++)
                printf(" *");
        }

         printf("\n");
    }


}