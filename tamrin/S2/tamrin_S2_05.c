// print sery fibo ta n sery
#include <stdio.h>

int main()
{
    // tarif moteghyer x = sery aval, y = sery dovom, fib = mohasebeh sery fibo
    int x = 0, y = 1, fib = 0;
    int n;

    printf("ta chand sery tolid konam? : ");
    scanf("%d", &n);

    if (n==1 || n==2)
    {
        printf("1");
    }
    else // mohasebeh sery fibo
    {
        for (int i = 2; i <= n; i++)
        {
            fib = x+y;
            x = y, y = fib;
            printf("%d\t", fib);
        }
    }
    return 0;

}
