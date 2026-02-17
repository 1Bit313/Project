// mohasebeh masahat dayereh
#include <stdio.h>
// prototype function calculate circle
float circlcalculate(float);

int main()
{
    // r = radius of circle(shoa dayereh)
    float r;
    printf("enter radius of circle: ");
    scanf("%f", &r);
    printf("circle area = %.2f", circlcalculate(r));
}
// function circl calculate
float circlcalculate(float r)
{
    return r * r * 3.14;
}
