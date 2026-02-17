#include <stdio.h>

int main()
{
    int n = 20;
    printf("chand sry chap conam? ");
    scanf("%d", &n);
    int fib[n];

    fib[0] = 0;
    fib[1] = 1;
    for (int i = 0; i <= n; i++)
    {
        fib[i + 2] = fib[i] + fib[i + 1];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        printf("fib[%d]  =  %d\n", i, fib[i]);
    }
}
