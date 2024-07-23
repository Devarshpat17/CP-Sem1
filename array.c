#include<stdio.h>
int main()
{
    int n;
   int a[n],b[5],i,j;
   printf("Enter value of n");
   scanf("%d",&n);
   for(i=0;i<5;i++)
   {
    scanf("%d",&a[i]);
   }
for(j=0;j<5;j++)
{
    b[i]=a[i]*a[i];
}
for(i=0;i<5;i++)
{
    printf("%d",b[i]);

}





}