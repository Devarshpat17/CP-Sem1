#include<stdio.h>
#include<stdlib.h>

int main()
{

    int i,j,num,x=1,f,k,t;
    char ch='A';


    
        
        for(i=1;i<=4;i++)
        {
            if(i%2==0)
            {
            for(j=1;j<=i;j++)
            {
                printf("%c",ch);
                ch++;
            }
            }
            else
            {
                for(num=1;num<=i;num++)
                {
                    printf("%d",x);
                    x++;
                }

            }
        printf("\n");   
        }    
}