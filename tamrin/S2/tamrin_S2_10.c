// mohasebeh ebarat 1/1! + 1/2! + ... + 1/n! (n < 10)
#include <stdio.h>

int main()
{
    // fact = mohasebeh factorile, sum = majmo fact
    int fact = 1;
    float sum = 0;

    // mohasebeh sery bala
    for (int i = 1; i < 10; i++)
    {
        fact *= i;
        sum = sum + (1.0 / fact);
    }
    // chap dar khorojy
    printf("sum = %.5f", sum);
    
    return 0;
}
