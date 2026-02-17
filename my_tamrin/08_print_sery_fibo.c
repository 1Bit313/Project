// print sery fibo ta n sery
#include <stdio.h>

int main()
{
    long long x = 0, y = 1;
    long long n, fib = 0;
    printf("ta chand sery tolid konam? : ");
    scanf("%lld", &n);
    if (n==1 || n==2)
    {
        printf("1");
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            fib = x+y;
            x = y, y = fib;
            //printf("%d\t%d\n", x,y);
        }
        printf("%lld", fib);
    }

}
