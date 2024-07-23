#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
       int  num,i,fact,m,number;
    printf("Enter the number to find the factors of :");
    scanf("%d",&num);
    printf("\nFactors of %d are \n",num);

    for(i=1; i<= num/2;i++)
    {
        if(num%i==0)
            printf("\t\t\t%d\n",i);
    }

    printf("Enter a number: ");    
  scanf("%d",&number);    
    for(m=1;m<=number;m++){    
      fact=fact*m;    
    }    
  printf("Factorial of %d is: %d",number,fact); 

    return 0;
}