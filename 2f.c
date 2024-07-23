#include<stdio.h>
#include<math.h>
int main()
{
float price,rs,paise;
int a;
printf("Enter price of an item:");
scanf("%f",&price);
a=price*100;
rs=a/100;
paise=a%100;
printf("Rupees:%f\n",rs);
printf("Paise:%f",paise);
}