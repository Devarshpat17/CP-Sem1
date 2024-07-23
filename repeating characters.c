#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len,count;
    char s2[100],ch,c;

        printf("enter the string :");
        gets(s2);

        printf("\nthe string is :");
        puts(s2);

        len=strlen(s2);
        printf("length  of the string is : %d\n",len);

// convert every character in a string to lower case
    for(i=0;i<len;i++)
    {
        if(s2[i]<97)
        s2[i]=(s2[i]=32);
    }

/// sorting using selection sort 
j=0;
for(i=0;i<len-1;i++)
{
    for(j=i+1;j<len;j++)
    {
        if(s2[i]>s2[j])
        {
            char ch;
            ch=s2[i];
            s2[i]=s2[j];
        }
    }
}
        for(i=0;i<len;)
        {
            char c=s2[i];
            count=0;

                while(c==s2[i])
                {
                    count++;
                    i++;
                }

            if(count!=0)
            {
                printf("%c=%d\n",c,count);
            }
        }




}
