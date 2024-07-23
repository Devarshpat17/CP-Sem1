#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

int main() 
{
  long long x;
  int a=0,r,y=1,sum=0,b;
  printf("Enter an integer: ");
  scanf("%lld",&x);
  b=rand;
  while(y<=5)
{
    if(x==b)
    {
        printf("Correct guess");
        break;
    }
    else if(x>b)
    {
        printf("Enter Greater Number");
        break;
    }
    else if(x<b)
    {
        printf("Enter Lower Number");
        break;
    }
b++;
}
}