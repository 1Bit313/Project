#include <stdio.h>

int main()
{
    float x,y;
    printf("enter number x: ");
    scanf("%d", &x);
    y=1/((x*x)+x+3);
    printf("\ny= %.2f", y);
}
