// tabdil dama az celsius beh Fahrenheit
#include <stdio.h>
// prototype function mohasebeh
float mohasebeh(float);
// main function
int main()
{
    // adad vorody
    float x;
    // daryaft vorody
    printf("dama ra vared konid('C'): ");
    scanf("%f", &x);

    // chap khorojy, farakhany tabe
    printf("Fahrenheit = %.2f", mohasebeh(x));
}

// function mohasebeh
float mohasebeh(float x)
{
    // meghdar dehy avaliyeh
    float fh = 32;
    // mohasebeh tabdil dama
    x = fh + (x * 1.8);
    return(x);
}
