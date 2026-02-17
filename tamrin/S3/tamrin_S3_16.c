#include <stdio.h>

static float sum, sub, div, mod, mul;

float mohasebeh(float, float);
int main()
{
    float x, y, a, b, c;

    printf("Enter number x: ");
    scanf("%f", &x);

    printf("Enter number y: ");
    scanf("%f", &y);

    mohasebeh(x, y);

    printf("%-10.2f%-10.2f%-10.2f%-10.2f", sum, sub, div, mul);

}

float mohasebeh(float x, float y)
{
    sum = x + y;
    sub = x - y;
    div = x / y;
    mul = x * y;
    return 0;
}
