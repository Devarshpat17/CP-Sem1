     #include<stdio.h>
     #include<math.h>
     int main()
     {
     int n;
    scanf("%d", &n);
    int totaldigits = 0, v = n,tp, ax, nx, na, total;

    while (v)
    {
        v = v/10;
        totaldigits++;
    }
    int a[totaldigits], b[totaldigits];

    total = totaldigits;
    int totalx = total;

    for (;totaldigits;totaldigits--) 
    {
        tp = pow(10, totaldigits-1);
        ax = 10;
        nx = n / tp;
        na = nx % ax;
        a[totaldigits - 1] = na;
    }
    int i;

    for(i = 0;total;total--, i++)
    {
        b[i] = a[total-1];
    }

    for (;totalx;totalx--) 
    {
        if(a[totalx-1] != b[totalx-1]){
            printf("Not Palindrome");
            return 0;
        }
    }

    printf("It's a Palindrome");
     }