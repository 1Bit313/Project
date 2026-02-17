/*
مقایسه سه عدد با هم
*/
#include <stdio.h>

int main()
{
    float a, b, c;
    printf("enter the first number: ");
    scanf("%f", &a);

    printf("\nenter the secend number: ");
    scanf("%f", &b);

    printf("\nenter the third number: ");
    scanf("%f", &c);

    if(a>b && a>c)
        printf("number %.2f is a big number", a);
    else if(b>a && b>c)
        printf("number %.2f is a big number", b);
    else if(c>a && c>b)
        printf("number %.2f is a big number", c);
    else if(a==b && a==c)
        printf("All numbers are equal");
    return 0;
}
