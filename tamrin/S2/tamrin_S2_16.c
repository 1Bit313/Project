// drayaft 2 adad ashary az vorody, +, -, *, / An ha bar ham
#include <stdio.h>
int main()
{
    float x, y;
    while (1)
    {
        printf("\nenter number 1: ");
        scanf("%f", &x);
        printf("enter number 2: ");
        scanf("%f", &y);
        if(x == 0 && y == 0)
            break;
        printf("\n%.2f + %.2f = %.2f", x, y, x + y);
        printf("\n%.2f - %.2f = %.2f", x, y, x - y);
        printf("\n%.2f * %.2f = %.2f", x, y, x * y);
        printf("\n%.2f / %.2f = %.2f", x, y, x / y);
    }

}
