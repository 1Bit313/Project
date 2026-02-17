// mohasebeh miyangin 3 adad ba tebe
#include <stdio.h>
// prototype function mohasebeh
float mohasebeh(float, float, float);
// main function
int main()
{
    // adad vorody
    float a, b, c;
// daryaft vorody ha
    printf("Enter your number(1): ");
    scanf("%f", &a);
    printf("Enter your number(2): ");
    scanf("%f", &b);
    printf("Enter your number(3): ");
    scanf("%f", &c);

    // chap khorojy, farakhany tabe
    printf("avg = %.2f", mohasebeh(a, b, c));
}

// function mohasebeh
float mohasebeh(float a, float b, float c)
{
    float sum;
    sum = a + b + c;
    return(sum / 3);
}
