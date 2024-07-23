#include<stdio.h>

int main()
{
    int a;
    float b;
    char c;
    printf("Enter a Integer \n");
    printf("Enter a Float\n");
    printf("Enter a character\n");
    scanf("%d\n%f\n%c",&a,&b,&c);
    printf("your values are\n integer=%d\nfloat=%.2f\ncharacter=%c",a,b,c);
    
    
    return 0;
}