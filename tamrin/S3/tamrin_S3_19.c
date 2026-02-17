#include <stdio.h>
double fun(double x, int n);

int main()
{
    double x;
    int n;
    printf("Enter your number: ");
    scanf("%lf", &x);
    printf("Enter pow: ");
    scanf("%d", &n);
    printf("%.3lf", fun(x, n));
}
double fun(double x, int n)
{
    double sum = 1;
    for(int i = 1; i <= n ; i++)
        sum *= x;
    return sum;
}
