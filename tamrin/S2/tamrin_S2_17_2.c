#include <stdio.h>
int main()
{
    int a, b;
    printf("enter your number: ");
    scanf("%d.%d", &a, &b);


    while (b > 0)
    {
        printf("%d", b % 10);
        b /= 10;
    }
    putchar('.');
    while (a > 0)
    {
        printf("%d", a % 10);
        a /= 10;
    }

}
